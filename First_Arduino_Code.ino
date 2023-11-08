void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  blink(100, 10, 13);
  delay(1000);
  blink(1000, 5, 13);
}

void blink(int delay_time, int loop_amount, int pin) {
  for (int i = 0; i < loop_amount; i++) {
    digitalWrite(pin, HIGH);
    delay(delay_time);
    digitalWrite(pin, LOW);
    delay(delay_time);
  }
}