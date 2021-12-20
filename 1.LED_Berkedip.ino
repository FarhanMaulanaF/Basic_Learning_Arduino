const int pinLED = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED, OUTPUT);
}

int timeDelay = 3000;

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=1; i<=10; i++){
    digitalWrite(pinLED, HIGH);
    delay(500);
    digitalWrite(pinLED, LOW);
    delay(500);
  }
  delay(timeDelay);
}
