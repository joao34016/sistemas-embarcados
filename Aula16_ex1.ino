#define pinled1 8
#define pinled2 9
#define pinled3 10
#define pinled4 11
#define pinbotao 2
#define pinbotao2 3
#define pinbotao3 4

void setup() {
Serial.begin(9600);
pinMode(pinled1, OUTPUT);
pinMode(pinled2, OUTPUT);
pinMode(pinled3, OUTPUT);
pinMode(pinled4, OUTPUT);
pinMode(pinbotao, INPUT);
pinMode(pinbotao2, INPUT);
pinMode(pinbotao3, INPUT);

}

void loop() {
bool SensorA = digitalRead(pinbotao);
bool SensorB = digitalRead(pinbotao2);
bool est = digitalRead(pinbotao3);
if (SensorA==1){
digitalWrite(pinled2, HIGH);
digitalWrite(pinled1, LOW);
}else{
digitalWrite(pinled2, LOW);
digitalWrite(pinled1, HIGH);
}
if (SensorB==1){
  digitalWrite(pinled4, HIGH);
  digitalWrite(pinled3, LOW);
}else{
  digitalWrite(pinled4, LOW);
  digitalWrite(pinled3, HIGH);
}
if ((SensorA==1)&&(SensorB==1)){
digitalWrite(pinled1, LOW);
digitalWrite(pinled2, HIGH);
digitalWrite(pinled3, HIGH);
digitalWrite(pinled4, LOW);
}
}
