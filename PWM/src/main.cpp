#include <Arduino.h>
#define LED 16

const int freq = 5000;
const int resolution = 8;
const int channel = 0;

void setup()
{
  ledcSetup(channel, freq, resolution);
  ledcAttachPin(LED, channel);
}
void loop()
{
  for (int i = 0; i <= 255; i++)
  {
    ledcWrite(channel, i);
    delay(10);
  }

  for (int i = 255; i >= 0; i--)
  {
    ledcWrite(channel, i);
    delay(10);
  }
}