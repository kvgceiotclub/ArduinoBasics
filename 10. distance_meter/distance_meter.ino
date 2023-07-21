/* http://www.instructables.com/id/ARDUINO-DISTANCE-METER-WITH-ULTRASONIC-HC-SR-04/
 *  
 *  
  */
#include <LiquidCrystal.h>
#define ECHOPIN 10
#define TRIGPIN 11
LiquidCrystal lcd(8,9,4,5,6,7);// original 2,3,4,5,6,7
int H2,HT,H1;
void setup() {
lcd.begin(16,2);
lcd.print("Distancemeter");
lcd.setCursor(0,1);
lcd.print("Distance= ");
pinMode(ECHOPIN, INPUT);
pinMode(TRIGPIN, OUTPUT);
delay(100);
HT=200;
}

void loop() {
digitalWrite(TRIGPIN,LOW);
delayMicroseconds(2);
digitalWrite(TRIGPIN,HIGH);
delayMicroseconds(10);
digitalWrite(TRIGPIN,LOW);

int distance = pulseIn(ECHOPIN,HIGH);
distance = distance/29.41/2;
H2=HT-distance;
lcd.setCursor(9,1);
lcd.print(200-H2);
lcd.print("cm");
delay(100);
lcd.print(" "); // to refresh values 
}
