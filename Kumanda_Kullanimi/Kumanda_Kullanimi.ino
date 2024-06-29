int sensorPini=0; 
int ledPini=8;    
void setup() {
  pinMode(ledPini, OUTPUT); 
}
void loop() {
  int sensorDegeri; 
  sensorDegeri=analogRead(sensorPini); 
  digitalWrite(ledPini, HIGH); 
  delay(sensorDegeri); 
  digitalWrite(ledPini, LOW); 
  delay(sensorDegeri); 
}