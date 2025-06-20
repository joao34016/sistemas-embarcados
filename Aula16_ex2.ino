#define sensorH 2        
#define sensorL 3        
#define ledH 4           
#define ledL 5           
#define ledBomba 6       
#define ledAlarme 7      



void setup() {
  
  pinMode(sensorH, INPUT);
  pinMode(sensorL, INPUT);

  pinMode(ledH, OUTPUT);
  pinMode(ledL, OUTPUT);
  pinMode(ledBomba, OUTPUT);
  pinMode(ledAlarme, OUTPUT);

}

void loop() {
  bool H = digitalRead(sensorH);  
  bool L = digitalRead(sensorL);  

  

  
  if (H == 1 && L == 1) {
    digitalWrite(ledL, HIGH);
    digitalWrite(ledBomba, LOW);

    digitalWrite(ledH, HIGH);
    digitalWrite(ledAlarme, LOW);
  }
  if (H == 1 && L ==0) {
    digitalWrite(ledL, LOW);
    digitalWrite(ledBomba, LOW);

    digitalWrite(ledH, HIGH);
    digitalWrite(ledAlarme, HIGH);
  }
   if (H == 0 && L == 1) {
    digitalWrite(ledH, LOW);
    digitalWrite(ledBomba, HIGH);

    digitalWrite(ledL, HIGH);
    digitalWrite(ledAlarme, HIGH);
  }
  else {
    digitalWrite(ledH, LOW);
    digitalWrite(ledBomba, HIGH);

    digitalWrite(ledL, LOW);
    digitalWrite(ledAlarme, HIGH);
  }
}
