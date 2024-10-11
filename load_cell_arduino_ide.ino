#include <Arduino.h>
#include "HX711.h"

const int LOADCELL_DOUT_PINa = 2;
const int LOADCELL_SCK_PINa = 3;
const int LOADCELL_DOUT_PINb = 5;
const int LOADCELL_SCK_PINb = 6;

HX711 scale0;
HX711 scale1;

void setup() {
  Serial.begin(57600);

  scale0.begin(LOADCELL_DOUT_PINa, LOADCELL_SCK_PINa);
  scale0.read();      // print a raw reading from the ADC
  scale0.read_average(20);   // print the average of 20 readings from the ADC
  scale0.get_value(5);   // print the average of 5 readings from the ADC minus the tare weight (not set yet)
  scale0.get_units(5), 1;  // print the average of 5 readings from the ADC minus tare weight (not set) divided          // by the SCALE parameter (not set yet)          
  scale0.set_scale(-707.767550319);
  //scale.set_scale(-471.497);                      // this value is obtained by calibrating the scale with known weights; see the README for details
  scale0.tare();               // reset the scale to 0
  scale0.read();                 // print a raw reading from the ADC
  scale0.read_average(20);       // print the average of 20 readings from the ADC
  scale0.get_value(5);   // print the average of 5 readings from the ADC minus the tare weight, set with tare()
  scale0.get_units(5), 1;        // print the average of 5 readings from the ADC minus tare weight, divided
      
  scale1.begin(LOADCELL_DOUT_PINb, LOADCELL_SCK_PINb);
  scale1.read();      // print a raw reading from the ADC
  scale1.read_average(20);   // print the average of 20 readings from the ADC
  scale1.get_value(5);   // print the average of 5 readings from the ADC minus the tare weight (not set yet)
  scale1.get_units(5), 1;  // print the average of 5 readings from the ADC minus tare weight (not set) divided          // by the SCALE parameter (not set yet)          
  scale1.set_scale(717.734413);
  //scae.set_scale(-471.497);                      // this value is obtained by calibrating the scale with known weights; see the README for details
  scale1.tare();               // reset the scale to 0
  scale1.read();                 // print a raw reading from the ADC
  scale1.read_average(20);       // print the average of 20 readings from the ADC
  scale1.get_value(5);   // print the average of 5 readings from the ADC minus the tare weight, set with tare()
  scale1.get_units(5), 1;        // print the average of 5 readings from the ADC minus tare weight, divided
         // by the SCALE parameter set with set_scal
}

void loop() {
  scale0.get_units(), 1;
  Serial.println(-scale0.get_units(10), 5);
   scale1.get_units(), 1;
  
  Serial.println((scale1.get_units(10), 5));


  delay(5000);
}
