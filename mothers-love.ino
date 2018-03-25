void setup() {
  pinMode(13, OUTPUT);          // sets the digital pin 13 as output
}

void loop()
{
  digitalWrite(13, HIGH);       // blink in a certain rate
  delay(1000);                 
  digitalWrite(13, LOW);        
  delay(1000);
  digitalWrite(13, HIGH);       // blink faster
  delay(10);                   
  digitalWrite(13, LOW);        
  delay(100);
  digitalWrite(13, HIGH);        
  delay(10);                   
  digitalWrite(13, LOW);        
  delay(100); 
  digitalWrite(13, HIGH);        
  delay(10);                   
  digitalWrite(13, LOW);        
  delay(100);                     
}  
