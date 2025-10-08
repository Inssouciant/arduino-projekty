int led = 3;
int photoresistor = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(photoresistor, INPUT);
}

void loop() {
  if (digitalRead(photoresistor) == HIGH)
    digitalWrite(led, HIGH);
  else 
    digitalWrite(led, LOW);
}
