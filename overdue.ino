int sensorValue = 0;
int sensorPin = A0;
int brightness = 0;    // how bright the LED is
int fadeAmount = 10;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  pinMode(13, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  analogWrite(13, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(300);
