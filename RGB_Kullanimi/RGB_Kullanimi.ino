int R=9;
int G=10;
int B=11;
 
void setup() {
pinMode(R,OUTPUT);
pinMode(G,OUTPUT);
pinMode(B,OUTPUT);
}
 
void loop() {
int rDeger=random(0,255);
int gDeger=random(0,255);
int bDeger=random(0,255);
analogWrite(R,rDeger);
analogWrite(G,gDeger);
analogWrite(B,bDeger);
delay(1000);
}