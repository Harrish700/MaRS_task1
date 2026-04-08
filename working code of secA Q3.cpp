const int ledPin = 9;
const int buttonPin = 2; //LED pins

unsigned long startTime;
unsigned long reactionTime;

bool ledOn = false; // initial LED state

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); 

  Serial.begin(9600);
  randomSeed(analogRead(0)); // for randomness 
}

void loop() {

  // Random delay before LED turns ON
  int delayTime = random(2000, 5000); // 2 to 5 seconds
  delay(delayTime);

  // Turn ON LED and record time
  digitalWrite(ledPin, HIGH);
  startTime = millis();
  ledOn = true;

  // Wait for button press
  while (ledOn) {
    if (digitalRead(buttonPin) == LOW) { // button pressed
      reactionTime = millis() - startTime;

      Serial.print("Reaction Time: ");
      Serial.print(reactionTime);
      Serial.println(" ms");

      digitalWrite(ledPin, LOW);
      ledOn = false;

      delay(2000); // pause before next test
    }
  }
}

