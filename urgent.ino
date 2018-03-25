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

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
