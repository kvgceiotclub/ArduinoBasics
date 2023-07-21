/* Connect Pin 2 to Vcc/ Ground
 *  in1 to Pin 3
 *  in2 to Pin 4
 *  en1 to Pin 9
 */
int Moisture = 2; //Output of Moisture sensor
int motor = 13; // relay to ON/OFF motor, 
// Connect motor to NC
 

void setup() 
{
 pinMode(Moisture, INPUT);
 pinMode(motor, OUTPUT);
}

void loop() 
{
if (digitalRead(Moisture) == HIGH) 
{
digitalWrite(motor, HIGH); 

 }
        else  
 {
digitalWrite(motor, LOW); 

}
}
