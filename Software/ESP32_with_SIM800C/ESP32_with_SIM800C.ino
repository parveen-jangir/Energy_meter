#include <SoftwareSerial.h>

//Create SoftwareSerial object to communicate with SIM800L
SoftwareSerial GSM(16, 17);

void setup() {
  Serial.begin(9600);   //Begin serial communication with ESP32
  GSM.begin(9600),   //Begin serial communication with GSM800L

  Serial.println("Trying to connect with GSM");
  delay(500);

  GSM.println("AT");   //when GSM is connected with ESP32, it will return OK
  
}

void loop() {

}
