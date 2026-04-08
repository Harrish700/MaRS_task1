// LED pin connections
const int led1 = 9;
const int led2 = 10;
const int led3 = 11;

// Storing previous times
unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;

// LED states
bool state1 = LOW;
bool state2 = LOW;
bool state3 = LOW;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  unsigned long now = millis(); //using millis func to store runtime

  // LED 1
  if (now - previousMillis1 >= 500) {
    previousMillis1 = now;
    state1 = !state1; //changing state
    digitalWrite(led1, state1);
  }

  // LED 2
  if (now - previousMillis2 >= 1000) {
    previousMillis2 = now;
    state2 = !state2;//changing state
    digitalWrite(led2, state2);
  }

  // LED 3
  if (now - previousMillis3 >= 1500) {
    previousMillis3 = now;
    state3 = !state3;//changing state
    digitalWrite(led3, state3);
  }
}
