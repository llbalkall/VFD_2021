#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

/* mapping of 6920's OUT pins to the bits in shift register */
#define OUT0  0x0002      //B00000010
#define OUT1  0x0004      //B00000100
#define OUT2  0x0008      //B00001000
#define OUT3  0x0010      //B00010000
#define OUT4  0x0020      //B00100000
#define OUT5  0x0040      //...
#define OUT6  0x0080
#define OUT7  0x0100
#define OUT8  0x0200
#define OUT9  0x0400
#define OUT10 0x0800      //...
#define OUT11 0x0001      //B00000001
#define vfd_segment_A     OUT11         //   -- A -- 
#define vfd_segment_B     OUT8          //  |       |
#define vfd_segment_C     OUT2          //  F       B
#define vfd_segment_D     OUT3          //  |       |
#define vfd_segment_E     OUT1          //   -- G --
#define vfd_segment_F     OUT6          //  |       |
#define vfd_segment_G     OUT9          //  E       C
                                        //  |       |
                                        //   -- D --   

int add(int a, int b);  // Function prototype, its declaration

unsigned int char_to_segments(char inputChar);

void update_vfd_char_array(char* char_array, char* characters);

void update_vfd_char_array(char* char_array, char c1, char c2, char c3, char c4, char c5);

float celsius_to_fahrenheit(float celsius);

int decToBcd(int val);

int bcdToDec(int val);

#include <Wire.h>
#define DS3231_I2C_ADDRESS 0x68

class DS3231Manager{
    public:
        void readDS3231time(unsigned char* second, unsigned char* minute, unsigned char* hour,
        unsigned char* dayOfWeek, unsigned char* dayOfMonth, unsigned char* month, unsigned char* year);
        void setDS3231time(unsigned char second, unsigned char minute, unsigned char hour, unsigned char dayOfWeek, 
        unsigned char dayOfMonth, unsigned char month, unsigned char year);
};
#endif