#define  BUZZER_PIN 3

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int val, frequency;
  frequency = map(100, 100, 200, 300, 400);
  tone(BUZZER_PIN, frequency, 50);
  delay(100);
}