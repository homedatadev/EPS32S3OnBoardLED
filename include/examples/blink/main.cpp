#include <Arduino.h>
#include "EPS32S3OnBoardLED.h"

void setup()
{

}

void loop()
{
    EPS32S3OnBoardLED.on();
    delay(1000);
    EPS32S3OnBoardLED.off();
    delay(1000);
}