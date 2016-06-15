/*  
 *  ------ 4G  - Test module --------   
 */

#include "arduino4G.h"

char system_info[25];
int temperature;
uint8_t error;

void setup()
{
  

  //////////////////////////////////////////////////
  // 1. Switch on the 4G module
  //////////////////////////////////////////////////
  error = _4G.ON();
  // check answer
  if (error == 0)
  {    
    Serial.println(F(" "));
    Serial.println(F("Módulo 4G OK - Prueba finalizada\n"));  
  }
  else
  {
    // Problem with the communication with the 4G module
    Serial.println(F(" "));
    Serial.println(F("Módulo 4G NOK"));
  }
}



void loop()
{
  // do nothing
}





