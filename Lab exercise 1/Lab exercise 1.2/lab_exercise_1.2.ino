const int numLEDs = 11;
int ledPins[numLEDs] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  
  for (int i = 0; i < numLEDs / 2; i++) {
    digitalWrite(ledPins[i], HIGH);                     
    digitalWrite(ledPins[numLEDs - 1 - i], HIGH);       
    delay(150);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[numLEDs - 1 - i], LOW);
  }

 
  for (int i = numLEDs / 2 - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[numLEDs - 1 - i], HIGH);
    delay(150);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[numLEDs - 1 - i], LOW);
  }
}
