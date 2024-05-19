#include <Arduino.h>
#include "EPS32S3OnBoardLED.h"

void setup()
{

}

void loop()
{
    EPS32S3OnBoardLED.showColor(150,0,0);
    delay(1500);
    EPS32S3OnBoardLED.showColor(0,150,0);
    delay(1500);
    EPS32S3OnBoardLED.showColor(155,165,0);
    delay(500);
}