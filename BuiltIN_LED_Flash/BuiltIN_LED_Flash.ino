int delayTime = 2000;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED_BUILTIN, HIGH);
  degrees(delayTime);
  digitalWrite(LED_BUILTIN, LOW);
  degrees(delayTime);

}
