int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;
int BUT4 = D3;
int BUT5 = D4;
int LED1 = D5;
int LED2 = D6;
int LED3 = D7;
int LED4 = D8;
int LED5 = D9;

bool L1 = false;
bool L2 = false;
bool L3 = false;
bool L4 = false;
bool L5 = false;
bool L6 = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(BUT3, INPUT_PULLUP);
  pinMode(BUT4, INPUT_PULLUP);
  pinMode(BUT5, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //update the LEDs acc. 2 bools
  digitalWrite(LED1, L1);
  digitalWrite(LED2, L2);
  digitalWrite(LED3, L3);
  digitalWrite(LED4, L4);
  digitalWrite(LED5, L5);

  //button fucntionaliyt
  if (digitalRead(BUT1) == HIGH) {
    L1 = !L1;
    L2 = !L2;
    L3 = !L3;
    delay(100);
}

  if (digitalRead(BUT2) == HIGH) {
    L1 = !L1;
    L4 = !L4;
    L5 = !L5;
    delay(100);
}

  if (digitalRead(BUT3) == HIGH) {
    L1 = !L1;
    L2 = !L2;
    L4 = !L4;
    delay(100);
}

  if (digitalRead(BUT4) == HIGH) {
    L3 = !L3;
    L4 = !L4;
    L5 = !L5;
    delay(100);
}

  if (digitalRead(BUT5) == HIGH) {
    L2 = !L2;
    L3 = !L3;
    L5 = !L5;
    delay(100);
}


// iff all are on:
  if (L1 && L2 && L3 && L4 && L5) {
    digitalWrite(LED1, HIGH);
    delay(200);
    digitalWrite(LED2, HIGH);
    delay(200);
    digitalWrite(LED3, HIGH);
    delay(200);
    digitalWrite(LED4, HIGH);
    delay(200);
    digitalWrite(LED5, HIGH);
    delay(200);

    digitalWrite(LED1, LOW);
   digitalWrite(led_Pin_2, LOW);
    delay(300);
    digitalWrite(LED2, LOW);
    delay(300);
    digitalWrite(LED3, LOW);
    delay(300);
    digitalWrite(LED4, LOW);
    delay(300);
    digitalWrite(LED5, HIGH);
    delay(300);
  }

// main NEMAZAT
}
