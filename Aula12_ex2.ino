#define pinled1 9
#define pinled2 10
#define pinled3 11
#define pinled4 12
void setup() {
pinMode(pinled1, OUTPUT);
pinMode(pinled2, OUTPUT);
pinMode(pinled3, OUTPUT);
pinMode(pinled4, OUTPUT);
}

void loop() {
digitalWrite(pinled1, HIGH);
digitalWrite(pinled2, HIGH);
digitalWrite(pinled3, HIGH);
digitalWrite(pinled4, HIGH);
delay(1000);
digitalWrite(pinled1, LOW);
digitalWrite(pinled2, LOW);
digitalWrite(pinled3, LOW);
digitalWrite(pinled4, LOW);
delay(1000);

}
