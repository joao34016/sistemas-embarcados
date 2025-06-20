int chave1 = 2;
int chave2 = 3;
int chave3 = 4;
int led = 13;
int contador = 0;
int tic =0;
int tic2 = 0;
int tic3= 0;
void setup() {
  Serial.begin(9600);
  pinMode(chave1, INPUT);
  pinMode(chave2, INPUT);
  pinMode(chave3, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  bool estado1 = digitalRead(chave1);
  bool estado2 = digitalRead(chave2);
  bool estado3 = digitalRead(chave3);




  if (estado1 == 1 && tic==0){
    contador+=1;
    tic+=1;
    Serial.println(contador);
  }else{
    tic=0;
  }
  if (estado2 == 1 && tic==0){
    contador+=1;
    Serial.println(contador);
  }else{
    tic=0;
  }
  if (estado3 == 1 && tic==0){
    contador+=1;
    Serial.println(contador);
  }else{
    tic=0;
  }
  if (contador % 2 == 1 && tic2==0) {
    digitalWrite(led, HIGH);
    Serial.println("Número ímpar");
    tic2+=1;
    tic3=0;
  }
  if (contador % 2 ==0 && tic3==0){
    digitalWrite(led, LOW);
    Serial.println("Número par");
    tic3+=1;
    tic2=0;
  }
  delay(50);
}