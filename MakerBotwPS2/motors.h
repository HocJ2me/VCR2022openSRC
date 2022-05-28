#include <stdio.h>
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>


Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();


void initMotors()
{
  Wire.begin(); //SDA, SCL,400000);
  pwm.begin();
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(1600);
  Wire.setClock(400000);
}
void dong_co_1_tien()
{
  pwm.setPWM(M1_A, 0, 0);
  pwm.setPWM(M1_B, tocdo, 0);
  delay(15*1000);
  pwm.setPWM(M1_A, tocdo, 0);
  pwm.setPWM(M1_B, 0, 0);
  delay(15*1000);
  
  pwm.setPWM(M1_A, 4096, 0);
  pwm.setPWM(M1_B, 4096, 0);
    
}
void xe_tien()
{
  pwm.setPWM(M2_A, 0, 0);
  pwm.setPWM(M2_B, tocdo, 0);
  pwm.setPWM(M3_A, 0, 0);
  pwm.setPWM(M3_B, tocdo, 0);
}
void xe_trai()
{
  pwm.setPWM(M2_B, tocdo, 0);
  pwm.setPWM(M2_A, 0, 0);
  pwm.setPWM(M3_B, 0, 0);
  pwm.setPWM(M3_A, tocdo, 0);
}
void xe_phai()
{
  pwm.setPWM(M2_A, tocdo, 0);
  pwm.setPWM(M2_B, 0, 0);
  pwm.setPWM(M3_A, 0, 0);
  pwm.setPWM(M3_B, tocdo, 0);
}
void xe_lui()
{
  pwm.setPWM(M2_A, tocdo, 0);
  pwm.setPWM(M2_B, 0, 0);
  pwm.setPWM(M3_A, tocdo, 0);
  pwm.setPWM(M3_B, 0, 0);
}
void xe_dung()
{
  pwm.setPWM(M2_A, 4096, 0);
  pwm.setPWM(M2_B, 4096, 0);
  pwm.setPWM(M3_A, 4096, 0);
  pwm.setPWM(M3_B, 4096, 0);
}
