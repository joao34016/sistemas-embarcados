#define ledA 8
#define ledB 9
#define ledV 10
#define pin_botao 2
int conta = 0;
int tic = 0;


void setup() {
Serial.begin(9600);
pinMode(ledA, OUTPUT);
pinMode(ledB, OUTPUT);
pinMode(ledV, OUTPUT);
pinMode(pin_botao, INPUT);

}


void loop() {
  bool est1 = digitalRead(pin_botao);

  if ((est1==1)&&(tic==0)){
    conta+=1;
    tic +=1;
    Serial.println(conta);
  }
  if ((est1== 0)) {
    tic=0;
  }
  if (est1==1){
    digitalWrite(ledV, HIGH);
  }else{
    digitalWrite(ledV, LOW);
  }
  if (conta==0) {
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, LOW);
  }
  if (conta==1) {
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, HIGH);
  }
  if (conta==2) {
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, HIGH);
  }
  if (conta==3) {
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    tic+=1;
  }


    