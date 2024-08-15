// Triggers an alarm when a door is opened

const int switchPin = 9;
const int buzzerPin = 8;

void setup() {
    pinMode(switchPin, INPUT);
    pinMode(buzzerPin, OUTPUT);
}

void loop() {
    int switchState = digitalRead(switchPin);
    if (switchState == LOW) {
        tone(buzzerPin, 262);
    } else {
        noTone(buzzerPin);
    }
}
