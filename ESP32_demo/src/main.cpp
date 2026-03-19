#include <Arduino.h>

#define LED 5
#define BUTTON 4

int buttonState;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);

  digitalWrite(LED, LOW);
}

void loop()
{
  buttonState = digitalRead(BUTTON);

  if (buttonState == HIGH)
  {
    Serial.println("LED ON");
    digitalWrite(LED, HIGH);
  }
  else
  {
    Serial.println("LED OFF");
    digitalWrite(LED, LOW);
  }
}