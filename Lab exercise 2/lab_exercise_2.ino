int buttonUp = 10;
int buttonDown = 9;

int counter = 0;

int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

unsigned long lastDebounceUp = 0;
unsigned long lastDebounceDown = 0;
const unsigned long debounceDelay = 200; // ms

void setup() {
  pinMode(buttonUp, INPUT);
  pinMode(buttonDown, INPUT);

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  displayNumber(counter);
}

void loop() {
 
  if (digitalRead(buttonUp) == HIGH && (millis() - lastDebounceUp > debounceDelay)) {
    if (counter < 9) {
      counter++;
    }
    displayNumber(counter);
    lastDebounceUp = millis();
  }

 
  if (digitalRead(buttonDown) == HIGH && (millis() - lastDebounceDown > debounceDelay)) {
    if (counter > 0) {
      counter--;
    }
    displayNumber(counter);
    lastDebounceDown = millis();
  }
}

void displayNumber(int num) {
  switch(num) {
    case 0:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,HIGH); digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
      break;
    case 1:
      digitalWrite(a,LOW); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      break;
    case 2:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,LOW);
      digitalWrite(d,HIGH); digitalWrite(e,HIGH); digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      break;
    case 3:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,LOW); digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      break;
    case 4:
      digitalWrite(a,LOW); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
    case 5:
      digitalWrite(a,HIGH); digitalWrite(b,LOW); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,LOW); digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
    case 6:
      digitalWrite(a,HIGH); digitalWrite(b,LOW); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,HIGH); digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
    case 7:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      break;
    case 8:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,HIGH); digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
    case 9:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,LOW); digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
  }
}
