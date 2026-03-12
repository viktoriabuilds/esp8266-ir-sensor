const int IR_DIGITAL = D1;
const int IR_ANALOG = A0;

void setup() {
  Serial.begin(115200);
  delay(1000);

  pinMode(IR_DIGITAL, INPUT);

  Serial.println();
  Serial.print("Start");
}

void loop() {
  int digitalState = digitalRead(IR_DIGITAL);
  int analogValue = analogRead(IR_ANALOG);

  Serial.print("Digital: ");
  if (digitalState == HIGH) {
    Serial.print("HIGH");
  } else {
    Serial.print("LOW");
  }

  Serial.print("Analog: ");
  Serial.println(analogValue);

  delay(500);
}
