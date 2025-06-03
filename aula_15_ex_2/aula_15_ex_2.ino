#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao 2
#define pin_botao2 3
int conta = 0;
int tic = 0;
int tic2 = 0;

void setup() {
Serial.begin(9600);
pinMode(pin_led1, OUTPUT);
pinMode(pin_led2, OUTPUT);
pinMode(pin_led3, OUTPUT);
pinMode(pin_led4, OUTPUT);
pinMode(pin_botao, INPUT);
pinMode(pin_botao2, INPUT);
}


void loop() {
  bool est1 = digitalRead(pin_botao);
  bool est2 = digitalRead(pin_botao2);
 
  if ((est1==1)&&(tic==0)){
    conta+=1;
    tic +=1;
    Serial.println(conta);
  }
  if ((est1== 0)) {
    tic=0;
  }
  if ((est2==1)&&(tic2==0)){
  conta-=1;
  tic2+=1;
  tic=0;
  Serial.println(conta);
  }
  if ((est2==0)){
    tic2=0;
  }

  // } else {
  //   digitalWrite(pin_led1, 0);
  // }
  if ((est1==1)||(est2==1)){
    digitalWrite(pin_led2, 1);
  } else {
    digitalWrite(pin_led2, 0);
  }
  if ((est1==1)^(est2==1)){
    digitalWrite(pin_led3, 1);
  } else {
    digitalWrite(pin_led3, 0);
  
  }
  }