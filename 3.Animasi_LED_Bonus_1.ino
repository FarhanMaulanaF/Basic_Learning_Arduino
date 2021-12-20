const int numLED = 4;
const int pinLED[numLED] = {8,9,10,11};

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<4; i++){
    pinMode(pinLED[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<4; i++){
    digitalWrite(pinLED[i], HIGH);
    delay(500);
  }
  for(int i=0; i<4; i++){
    digitalWrite(pinLED[i], LOW);
    delay(500);
  }
}
