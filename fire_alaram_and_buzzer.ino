int flame = 8;
int buzzer = 9;
int led = 13;
int flamevalue;

void setup() {
  pinMode(flame, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Fire alarm system started.");
}

void loop() {
  flamevalue = digitalRead(flame);
  Serial.print("Flame value: ");
  Serial.println(flamevalue);
  
  if (flamevalue == 0) {
    Serial.println("Fire detected!");
    
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    delay(500);
    
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    delay(500);
  } else {
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }
  
  //delay(100);
}
