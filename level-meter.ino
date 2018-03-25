int sensorValue = 0;  
int sensorPin = A0; 

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  if (sensorValue == 1023) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    sensorValue = analogRead(sensorPin);
    
  } else if (sensorValue <= 250) {
    digitalWrite(13, HIGH);
    sensorValue = analogRead(sensorPin);
  } else if (sensorValue <= 510) {
    digitalWrite(12, HIGH);
    sensorValue = analogRead(sensorPin);
  } else if (sensorValue <= 760) {
    digitalWrite(11, HIGH); 
    sensorValue = analogRead(sensorPin);
  }
  
  delay(sensorValue);
  Serial.print(sensorValue);
}
