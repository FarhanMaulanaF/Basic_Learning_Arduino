// Free Ebook Arduino
// www.elangsakti.com
// coder elangsakti
// pin A0 adalah pin Analog
// pin 9 adalah pin digital support PWM
const int pinPot = A0;
const int pinLED = 9;
void setup() {
  pinMode(pinPot, INPUT);
  pinMode(pinLED, OUTPUT);
  Serial.begin(115200);
}

int sensor = 0;
int brightness = 0;

void loop() {
  // baca nilai kaki A0 (sensor, potensiometer)
  sensor = analogRead(pinPot);
  // konversi nilai 0-1023 (Analog) menjadi 0-255 (PWM)
  brightness = map(sensor, 0, 1023, 0, 255);
  // tentukan brightness LED dengan PWM
  analogWrite(pinLED, brightness);
  Serial.println(sensor);
}
