//http://www.instructables.com/id/Biometric-LED/
#include <Adafruit_Fingerprint.h>
#include <SoftwareSerial.h>
#include<stdint.h>

int getFingerprintIDez();


byte relay=13;


// pin #2 is IN from sensor (GREEN wire)
// pin #3 is OUT from arduino  (YELLOW wire)

SoftwareSerial mySerial(2, 3);  //activates serial communication on pin 2 & 3

Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);

void setup()  
            {
              Serial.begin(9600);      // initialize the serial communications:
              
              pinMode(relay, OUTPUT);      // set pin 13 as output. Relay connected

              finger.begin(57600);      // set the data rate for the sensor serial port
            }
 

void loop()                     // run over and over again
          {
            getFingerprintID();      
            delay(100);
          }

uint8_t getFingerprintID() 
{
  uint8_t p = finger.getImage();
 
  switch (p) 
        {
          case FINGERPRINT_OK:
             break;
          case FINGERPRINT_NOFINGER: 
            return p;
          case FINGERPRINT_PACKETRECIEVEERR:
            return p;
          case FINGERPRINT_IMAGEFAIL:
            return p;
          default:
            return p;
        }

  // OK success!
  p = finger.image2Tz();
  switch (p) 
      {
          case FINGERPRINT_OK:
            break;
          case FINGERPRINT_IMAGEMESS:
             return p;
          case FINGERPRINT_PACKETRECIEVEERR:
            return p;
          case FINGERPRINT_FEATUREFAIL:
            return p;
          case FINGERPRINT_INVALIDIMAGE:
            return p;
            default:
            return p;
      }
  
  // OK converted!
  p = finger.fingerFastSearch();
      if (p == FINGERPRINT_OK)
      {
         digitalWrite(relay, HIGH);           //turn on realy if finger ID is match
        } 
      else if(p == FINGERPRINT_NOTFOUND) 
        {
          digitalWrite(relay, LOW);           //turn off relay if finger do not match
          return p;
        }
      else
        {    return p;   }

}

// returns -1 if failed, otherwise returns ID #
int getFingerprintIDez() {
                    uint8_t p = finger.getImage();
                        if (p != FINGERPRINT_OK)  return -1;
                      
                        p = finger.image2Tz();
                        if (p != FINGERPRINT_OK)  return -1;
                      
                        p = finger.fingerFastSearch();
                        if (p != FINGERPRINT_OK)  return -1;

}

