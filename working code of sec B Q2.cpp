int ldrPin = A0;      
int ledPin = 9;   // led and sensor pin    

int threshold = 800;  // Adjust this value based on testing

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);  // Read light level

  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH); // Dark → LED ON
  } else {
    digitalWrite(ledPin, LOW);  // Bright → LED OFF
  }

  delay(200);
}
