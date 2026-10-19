int pushB=A0;
int redLED=3;
int pushVal;
int newVal;
int oldVal;
int LEDstate;


void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(pushB,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(newVal);
newVal=digitalRead(pushB);
if(oldVal==0 && newVal==1){
  if(LEDstate==0){
    digitalWrite(redLED,HIGH);
    LEDstate=1;
  }else{
    digitalWrite(redLED,LOW);
    LEDstate=0;
  }
  
}
oldVal=newVal;

}
