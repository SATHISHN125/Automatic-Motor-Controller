
#define sensorPin A0
#define relayPin 8

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if(sensorValue > 500){ // Threshold value to turn motor on
    digitalWrite(relayPin, HIGH); // Turn ON motor
  } else {
    digitalWrite(relayPin, LOW); // Turn OFF motor
  }

  delay(1000);
}
