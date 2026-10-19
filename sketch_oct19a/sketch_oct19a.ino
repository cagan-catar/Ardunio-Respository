int irPin=A0;
int readIr;
int redLED=9;
int LEDbright;


void setup() {
  // put your setup code here, to run once:
pinMode(irPin,INPUT);
pinMode(redLED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readIr=analogRead(irPin);
Serial.println(readIr);
LEDbright=(980./1023.*readIr);
analogWrite(redLED,LEDbright);
}
