int sensorPin = A0;    // select the input pin for the potentiometer
int motorPin = 8;      // select the pin for the LED
int sensorValue = 0;   // variable to store the value coming from the sensor

void setup() {
    // declare the motorPin as an OUTPUT:
    pinMode(sensorPin, INPUT);
    pinMode(motorPin, OUTPUT);
}

void loop() {
    // read the value from the sensor:
    sensorValue = analogRead(sensorPin);

    if (sensorValue > 300) {
        digitalWrite(motorPin, HIGH);
    } else {
        digitalWrite(motorPin, LOW);
    }
}
