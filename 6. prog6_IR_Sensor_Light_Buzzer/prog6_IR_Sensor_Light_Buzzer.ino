/* Connect IR sensor to Pin 7
 *  buzzer to pin 5
 *  and Relay to pin 13
 */
int LED = 13; 
int IRsensor = 7; 
int buzzer=5;
int Obstacle = HIGH; 
void setup() 
{
  pinMode(LED, OUTPUT);
  pinMode(IRsensor, INPUT);
}
void loop() 
{  Obstacle = digitalRead(IRsensor);
  if (Obstacle == HIGH)
  { digitalWrite(LED, LOW);
 buzzerfun();
 }
else
  { digitalWrite(LED, HIGH); }
   delay(200); }
void buzzerfun() 
{
for (int i=4; i>0; i--)
   {   digitalWrite(buzzer, HIGH);  
        delay(50); 
        digitalWrite(buzzer, LOW);    
        delay(50);   
    }
  delay(1000); 
}

