/* Mary Shelley Eyes
 by Carmen Peterson
 To make Mary Shelley's eyes swish back and forth in a portrait.

 Modified the Sweep example code:
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep

 modified 12 Oct 2023
 by Carmen Peterson
 
*/

#include <Servo.h>

Servo myservo;

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {

  // randomly choose a position within a 15 degree range
//  pos = random(35,42);
  pos = 60;
  myservo.write(pos);

  // Serial print to confirm position
  Serial.print("Position is " );
  Serial.println(pos);

  // wait about 5 seconds before teh next little shift
  delay(2500);
  
}
