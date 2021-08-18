/*
Keyestudio smart home Kit for Arduino
Project 1
Blink
http://www.keyestudio.com
*/

int countUp = 0;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
// the loop function runs over and over again forever
void loop() {
  countUp++;
  int index = countUp;
  String log = ": LED On";
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println(index + log);
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}//
