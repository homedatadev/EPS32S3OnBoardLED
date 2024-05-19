#include "EPS32S3OnBoardLED.h"

extern EPS32S3OnBoardLEDClass EPS32S3OnBoardLED;

void EPS32S3OnBoardLEDClass::showColor(uint8_t r,uint8_t g, uint8_t b)
{
    uint32_t col=Adafruit_NeoPixel::Color(r,g,b);
    led.setPixelColor(0, col);
    led.show();
}
