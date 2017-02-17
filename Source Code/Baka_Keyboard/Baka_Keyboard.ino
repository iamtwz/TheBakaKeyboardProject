#include <Keyboard.h>

void setup() {
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  if (digitalRead(9) == LOW) {
    Keyboard.press('1');
    delay(10);
  }

  if (digitalRead(10) == LOW) {
    Keyboard.press('0');
    delay(10);
  }
  
  Keyboard.releaseAll();
  delay(50);
}

