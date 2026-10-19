int lightPin=A0;
int lightVal;
int dt=250;
int redLED=2;
int greenLED=4;

void setup() {
  // put your setup code here, to run once:
pinMode(lightPin,INPUT);
pinMode(greenLED,OUTPUT);
pinMode(redLED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(lightPin);
Serial.println(lightVal);
delay(dt);

if(lightVal<=150){
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,LOW);
}
if(lightVal>=150){
  digitalWrite(redLED,HIGH);
  digitalWrite(greenLED,LOW);
}


}
