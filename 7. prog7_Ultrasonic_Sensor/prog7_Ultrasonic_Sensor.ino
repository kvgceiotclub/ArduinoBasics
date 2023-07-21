/* Connect tri to Pin 11
 *  echo to Pin 12
 *  Relay to Pin 13
 */
int trigPin=11;
int echoPin=12;
int led=13;
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
}
void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 4) {  
    digitalWrite(led,HIGH);
}
  else {
    digitalWrite(led,LOW);
  }
  delay(500);
}


  

