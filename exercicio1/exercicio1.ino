#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao 2



void setup() {
Serial.begin(9600);
pinMode(pin_led1, OUTPUT);
pinMode(pin_led2, OUTPUT);
pinMode(pin_led3, OUTPUT);
pinMode(pin_led4, OUTPUT);
pinMode(pin_botao, INPUT);
}



void loop() {
  bool est = digitalRead(pin_botao);
  if (est == 1){
    digitalWrite(pin_led1, HIGH);
    


}
  
