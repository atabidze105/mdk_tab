#define  BUZZER_PIN 3

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int val, note1, note2, note3, note4, note5, note6;
  note1 = map(100, 100, 200, 300, 400);
  note2 = map(100, 200, 400, 400, 500);
  note3 = map(100, 200, 300, 450, 500);
  note4 = map(100, 100, 400, 450, 400);
  note5 = map(100, 100, 100, 300, 400);
  note6 = map(-180, -110, 200, 300, 400);

  tone(BUZZER_PIN, note1, 300);
  delay(300);
  tone(BUZZER_PIN, note2, 300);
  delay(300);
  tone(BUZZER_PIN, note3, 300);
  delay(300);
  tone(BUZZER_PIN, note4, 300);
  delay(300);
  tone(BUZZER_PIN, note3, 300);
  delay(300);
  tone(BUZZER_PIN, note2, 300);
  delay(300);
  tone(BUZZER_PIN, note5, 300);
  delay(700);
  tone(BUZZER_PIN, note6, 150);
  delay(150);
  tone(BUZZER_PIN, note2, 150);
  delay(150);
  tone(BUZZER_PIN, note5, 200);
  delay(2000);
}