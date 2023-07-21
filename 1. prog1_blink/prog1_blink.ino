/* Connect LED/ Relay to Pin 13 */
int light=13;
void setup() 
  {
    pinMode(light, OUTPUT);
  }
  void loop() 
  {  digitalWrite(light, HIGH);   
     delay(1000);  // 1m x 1000=1sec
     digitalWrite(light, LOW);   
     delay(1000);                       
  }

