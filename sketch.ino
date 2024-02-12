void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(13, HIGH);
  delay((3000));
  digitalWrite(13, LOW);
}

void loop() {
  /*
  //1. on=0.5 sec, off=1 sec
  //включение лампочки на полсекунды
  digitalWrite(13, HIGH);
  delay(500);
  //затухание лампочки на 1 секунду
  digitalWrite(13, LOW);
  delay(1000);
  */

  //2. Первое включение - 3 сек, потом мигает чаще
  digitalWrite(13, HIGH);
  delay(100);
  //затухание лампочки на 1 секунду
  digitalWrite(13, LOW);
  delay(900);
}
