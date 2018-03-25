int sensorValue = 0;
int sensorPin = A0;
int brightness = 0;    // how bright the LED is
int fadeAmount = 100;    // how many points to fade the LED by

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  // set the brightness of pin 9:
  analogWrite(13, brightness);

  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 10 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  for (int i=0; i<5 ; i++)
  delay(50);               
  digitalWrite(13, LOW);        
  delay(100);
  digitalWrite(13, HIGH);        
  delay(100);
}
