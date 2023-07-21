/* Connect Pin 2 to Vcc/ Ground
 *  in1 to Pin 3
 *  in2 to Pin 4
 *  en1 to Pin 9
 */
int switchPin = 2; //vcc,gnd
int in1 = 3; 
int in2 = 4;
int en1 = 9; 

void setup() 
{
 pinMode(switchPin, INPUT);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(en1, OUTPUT);
}

void loop() 
{
if (digitalRead(switchPin) == HIGH) 
{
digitalWrite(in1, LOW); 
digitalWrite(in2, HIGH); 
digitalWrite(en1, HIGH);
 }
        else  
 {
digitalWrite(in1, HIGH); 
digitalWrite(in2, LOW); 
digitalWrite(en1, HIGH);
}
}



    
    


