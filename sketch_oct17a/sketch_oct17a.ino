int buzzPin=3;
int fotPin=A0;
int fotVal;


void setup() {
  // put your setup code here, to run once:
pinMode(buzzPin,OUTPUT);
pinMode(fotPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
fotVal=analogRead(fotPin);
Serial.println(fotVal);

if(fotVal>=300){
  digitalWrite(buzzPin,HIGH);
  delay(1000);
  digitalWrite(buzzPin,LOW); 
}
else{
  digitalWrite(buzzPin,LOW);
}
}
