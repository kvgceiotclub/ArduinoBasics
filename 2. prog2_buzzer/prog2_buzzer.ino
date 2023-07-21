/* Connect buzzer to Pin 13 */
int buzzer=13;
void setup() 
{
pinMode(buzzer, OUTPUT);
}
void loop() 
{     for (int i=0; i<4; i++)
       {    digitalWrite(buzzer, HIGH);  
          delay(50); // 1m x 50=0.05msec
          digitalWrite(buzzer, LOW);    
          delay(50);    
       }
    delay(1000); // 1m x 1000= 1 sec
}

