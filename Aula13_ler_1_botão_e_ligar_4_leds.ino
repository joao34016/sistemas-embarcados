#define pinled1 9
#define pinled2 10
#define pinled3 11
#define pinled4 12
#define pinbotao 2
void setup() {
pinMode(pinled1, OUTPUT);
pinMode(pinled2, OUTPUT);
pinMode(pinled3, OUTPUT);
pinMode(pinled4, OUTPUT);
pinMode(pinbotao, INPUT);
}

void loop() {
  bool est = digitalRead(pinbotao);
  if (est==1){
    digitalWrite(pinled1, 1);
    digitalWrite(pinled2, 1);
    digitalWrite(pinled3, 1);
    digitalWrite(pinled4, 1);}
  if (est==0){
    digitalWrite(pinled1, 0);
    digitalWrite(pinled2, 0);
    digitalWrite(pinled3, 0);
    digitalWrite(pinled4, 0);
  }

}
