#include <Arduino.h>
#include <Arduino_LSM6DS3.h>
#include <Xicro_read_imu_ID_3.h>
Xicro xicro;

float ax, ay, az;  
float gx, gy, gz;  

float orientation[4]={0};
float orientation_covariance[9]={1,0,0,0,1,0,0,0,1};
float angular_velocity[3]={0};
float angular_velocity_covariance[9]={1,0,0,0,1,0,0,0,1};
float linear_acceleration[3]={0};
float linear_acceleration_covariance[9]={1,0,0,0,1,0,0,0,1};


void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(57600);
  xicro.begin(&Serial);
  IMU.begin();
  //Set timer
  TCB0.CTRLB = TCB_CNTMODE_INT_gc; 
  // TCB0.CCMP  = 12500;   //20 Hz.
  TCB0.CCMP  = 25000;   //10 Hz.
  TCB0.INTCTRL = TCB_CAPT_bm; 
  TCB0.CTRLA = TCB_CLKSEL_CLKTCA_gc | TCB_ENABLE_bm;
//end of set timer
}

void read_imu_Sendros2()
{
  if(IMU.readAcceleration(gx, gy, gz) && IMU.readGyroscope(ax, ay, az))
  {
      angular_velocity[0]=ax*(3.141592/180.00);
      angular_velocity[1]=ay*(3.141592/180.00);
      angular_velocity[2]=az*(3.141592/180.0);
      linear_acceleration[0]=gx*(9.80665);
      linear_acceleration[1]=gy*(9.80665);
      linear_acceleration[2]=gz*(-9.80665);
      xicro.publish_Imu_arduino((int32_t)micros() / 1000000.00, (uint32_t)micros() / 1000000.00, (String)"from arduino" 
      ,orientation[0],orientation[1],orientation[2],orientation[3],orientation_covariance 
      ,angular_velocity[0],angular_velocity[1],angular_velocity[2],angular_velocity_covariance 
      ,linear_acceleration[0],linear_acceleration[1],linear_acceleration[2] ,linear_acceleration_covariance );
  }

}
void loop() {
  // put your main code here, to run repeatedly:
  xicro.Spin_node();
}

ISR(TCB0_INT_vect)
{
  read_imu_Sendros2();
  TCB0.INTFLAGS = TCB_CAPT_bm; 
}