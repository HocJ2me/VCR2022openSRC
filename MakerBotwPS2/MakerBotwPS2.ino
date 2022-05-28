#include "config.h"
#include "motors.h"
#include "PS2_controller.h"

void setup()
{
  Serial.begin(115200);
  initMotors();
/*  test dc
  xe_tien();
  delay(2000);
  xe_trai();
  delay(2000);
  xe_phai();
  delay(2000);
  xe_lui();
  delay(2000);
  xe_dung();
  */
  setupPS2controller();
  Serial.println("Done setup!");
  
}

void loop()
{
  ps2x.read_gamepad(false, 0);
  PS2control();
}
