//https://www.allaboutcircuits.com/projects/make-a-digital-voltmeter-using-the-arduino/
#include "LiquidCrystal.h"
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
float input_voltage = 0.0;
float temp=0.0;
void setup()
{
   lcd.begin(16, 2);       //// set up the LCD's number of columns and rows: 
   lcd.print("DIGITAL VOLTMETER");
}
void loop()
{
//Conversion formula for voltage
      int analog_value = analogRead(A0);
   input_voltage = (analog_value * 5.0) / 1024.0; 
      if (input_voltage < 0.1) 
   {
     input_voltage=0.0;
   } 
    lcd.setCursor(0, 1); // 0th position, l- second line
    lcd.print("Voltage= ");
    lcd.print(input_voltage);
    delay(300);
}
