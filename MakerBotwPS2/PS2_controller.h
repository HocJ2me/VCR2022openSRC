//#include "motors.h"
#include <PS2X_lib.h>

PS2X ps2x; // create PS2 Controller Class

#define PS2_DAT 12 //MISO  19
#define PS2_CMD 13 //MOSI  23
#define PS2_SEL 15 //SS     5
#define PS2_CLK 14 //SLK   18

//#define MIN_PWM 0
//#define MAX_PWM 4095
//bool RUN = 0;

void setupPS2controller()
{
  ps2x.config_gamepad(PS2_CLK, PS2_CMD, PS2_SEL, PS2_DAT, true, true);
  ps2x.readType();
  //  ps2x.read_gamepad(false, 0); // disable vibration of the controller
}
bool PS2control()
{

          if(ps2x.Button(PSB_L1))
          {
            Serial.println("Nhan vao L1");
            dong_co_1_tien();
            
          }
          if(ps2x.Button(PSB_L2))
          {
            Serial.println("Nhan vao L2");
          }
      
          if(ps2x.Button(PSB_PAD_UP)) {      //will be TRUE as long as button is pressed
            xe_tien();
            Serial.print("Up held this hard: ");
            Serial.println(ps2x.Analog(PSAB_PAD_UP), DEC);
          }
          if(ps2x.Button(PSB_PAD_RIGHT)){
            xe_phai();
            Serial.print("Right held this hard: ");
            Serial.println(ps2x.Analog(PSAB_PAD_RIGHT), DEC);
          }
          if(ps2x.Button(PSB_PAD_LEFT)){
            xe_trai();
            Serial.print("LEFT held this hard: ");
            Serial.println(ps2x.Analog(PSAB_PAD_LEFT), DEC);
          }
          if(ps2x.Button(PSB_PAD_DOWN)){
            xe_lui();
            Serial.print("DOWN held this hard: ");
            Serial.println(ps2x.Analog(PSAB_PAD_DOWN), DEC);
          }   
  
        
        if (ps2x.NewButtonState()) 
        {        //will be TRUE if any button changes state (on to off, or off to on)
          if(ps2x.Button(PSB_L3))
            Serial.println("L3 pressed");
          if(ps2x.Button(PSB_R3))
            Serial.println("R3 pressed");
          if(ps2x.Button(PSB_L2))
          {
            Serial.println("L2 pressed");
//            giam_toc();
          }
          if(ps2x.Button(PSB_R2))
          {
            Serial.println("R2 pressed");
//                tang_toc();
          }
          if(ps2x.Button(PSB_TRIANGLE))
          {
//                gat_len();
            Serial.println("Triangle pressed"); 
          }       
          
          xe_dung();
        }
}
