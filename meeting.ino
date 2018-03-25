int sensorValue = 0;
int sensorPin = A0;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  for (int i=0; i<10 ; i++)             
  digitalWrite(13, LOW);        
  delay(100);
  digitalWrite(13, HIGH);        
  delay(100);
  digitalWrite(13, LOW);        
  delay(20);
  digitalWrite(13, LOW);        
  delay(100);
  digitalWrite(13, HIGH);        
  delay(100);
  digitalWrite(13, LOW);        
  delay(20);
  digitalWrite(13, HIGH);        
  delay(100);
}
