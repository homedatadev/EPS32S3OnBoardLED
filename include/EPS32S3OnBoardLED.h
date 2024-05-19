#ifndef EPS32S3OnBoardLED_h
#define EPS32S3OnBoardLED_h

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>



class EPS32S3OnBoardLEDClass
{
    private:
        Adafruit_NeoPixel led;

    public:
        EPS32S3OnBoardLEDClass():led(1, S3_ON_BOARD_LED, NEO_GRB + NEO_KHZ800) {};
        
        void showColor(uint8_t r,uint8_t g, uint8_t b);

        void on(void){showColor(0,100,0);};
        void off(void){showColor(0,0,0);};
};

extern EPS32S3OnBoardLEDClass EPS32S3OnBoardLED;
#endif