/* Connect RX (HC-05) to TX(Arduino)
 *  Connect TX (HC-05) to RX (Arduino)
 */
int ledPin = 13; 
int state = 0;
void setup() 
{
 pinMode(ledPin, OUTPUT);
 digitalWrite(ledPin, LOW);
 Serial.begin(9600); 
}
void loop() 
{
 if(Serial.available() > 0)
 {
 state = Serial.read();
 }
 if (state == '0') 
 {
 digitalWrite(ledPin, LOW);
 }
 else if (state == '1') 
 {
 digitalWrite(ledPin, HIGH);
 }
 }    

