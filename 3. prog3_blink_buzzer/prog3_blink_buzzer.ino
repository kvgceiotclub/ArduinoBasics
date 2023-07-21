int light=13;   //nc    
int buzzer= 12;  
// Resolving dual use of //hardware resources         

void setup()
{
pinMode(light, OUTPUT); 
pinMode(buzzer, OUTPUT); 
}

void loop()
{
lightfun();            // Call function
delay(1000);
buzzerfun();         // Call function
delay(1000);
}
void lightfun() 
{                
digitalWrite(light, HIGH);   
  delay(1000);                       
  digitalWrite(light, LOW);    
  delay(1000);                       
}

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

