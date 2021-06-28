#include "functions.h"

// Function definition
int add(int a, int b)
{
    return a + b;
}

unsigned int char_to_segments(char inputChar) {
  unsigned int outputSegCode = 0x0000;
  switch(inputChar) {
    case 0:
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_C | vfd_segment_D | vfd_segment_E | vfd_segment_F;
    break;
    case 1:
      outputSegCode = vfd_segment_B | vfd_segment_C;
    break;
    case 2:
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_G | vfd_segment_E | vfd_segment_D;
    break;
    case 3:
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_C | vfd_segment_G | vfd_segment_D;
    break;
    case 4:
      outputSegCode = vfd_segment_B | vfd_segment_C | vfd_segment_F | vfd_segment_G;
    break;
    case 5:
      outputSegCode = vfd_segment_A | vfd_segment_C | vfd_segment_D | vfd_segment_F | vfd_segment_G;
    break;
    case 6:
      outputSegCode = vfd_segment_A | vfd_segment_C | vfd_segment_D | vfd_segment_E | vfd_segment_F | vfd_segment_G;
    break;
    case 7:
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_C;
    break;
    case 8:
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_C | vfd_segment_D | vfd_segment_E | vfd_segment_F | vfd_segment_G;
    break;
    case 9:
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_C | vfd_segment_D | vfd_segment_F | vfd_segment_G;
    break;
    case '0':
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_C | vfd_segment_D | vfd_segment_E | vfd_segment_F;
    break;
    case '1':
      outputSegCode = vfd_segment_B | vfd_segment_C;
    break;
    case '2':
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_G | vfd_segment_E | vfd_segment_D;
    break;
    case '3':
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_C | vfd_segment_G | vfd_segment_D;
    break;
    case '4':
      outputSegCode = vfd_segment_B | vfd_segment_C | vfd_segment_F | vfd_segment_G;
    break;
    case '5':
      outputSegCode = vfd_segment_A | vfd_segment_C | vfd_segment_D | vfd_segment_F | vfd_segment_G;
    break;
    case '6':
      outputSegCode = vfd_segment_A | vfd_segment_C | vfd_segment_D | vfd_segment_E | vfd_segment_F | vfd_segment_G;
    break;
    case '7':
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_C;
    break;
    case '8':
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_C | vfd_segment_D | vfd_segment_E | vfd_segment_F | vfd_segment_G;
    break;
    case '9':
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_C | vfd_segment_D | vfd_segment_F | vfd_segment_G;
    break;
    case ' ':
      outputSegCode = 0;
    break;
    case 'c':
      outputSegCode = vfd_segment_G | vfd_segment_E | vfd_segment_D;
    break;
    case 'C':
      outputSegCode = vfd_segment_A | vfd_segment_E | vfd_segment_F | vfd_segment_D;
    break;
    case 'u':
      outputSegCode = vfd_segment_E | vfd_segment_D | vfd_segment_C;
    break;
    case 'w':
      outputSegCode = vfd_segment_D | vfd_segment_C;
    break;
    case 'U':
      outputSegCode = vfd_segment_E | vfd_segment_D | vfd_segment_C | vfd_segment_B | vfd_segment_F;
    break;
    case 'W':
      outputSegCode = vfd_segment_D | vfd_segment_C | vfd_segment_B;
    break;
    case 'h':
      outputSegCode = vfd_segment_F | vfd_segment_E | vfd_segment_G | vfd_segment_C;
    break;
    case 'H':
      outputSegCode = vfd_segment_F | vfd_segment_E | vfd_segment_G | vfd_segment_C | vfd_segment_B;
      break;
    case 'O':
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_C | vfd_segment_D | vfd_segment_E | vfd_segment_F;
    break;
    case 'o':
      outputSegCode = vfd_segment_E | vfd_segment_G | vfd_segment_C | vfd_segment_D;
    break;
    case 'P':
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_E | vfd_segment_F | vfd_segment_G;
    break;
    case 't':
      outputSegCode = vfd_segment_F | vfd_segment_E | vfd_segment_D | vfd_segment_G;
    break;
    case 'r':
      outputSegCode = vfd_segment_E | vfd_segment_G;
    break;
    case 'n':
      outputSegCode = vfd_segment_E | vfd_segment_G | vfd_segment_C;
    break;
    case 'N':
      outputSegCode = vfd_segment_E | vfd_segment_A | vfd_segment_C | vfd_segment_B | vfd_segment_F;
    break;
    case 'M':
      outputSegCode = vfd_segment_A | vfd_segment_C | vfd_segment_B;
    break;
    case 'm':
      outputSegCode = vfd_segment_G | vfd_segment_C;
    break;
    case 'f':
      outputSegCode = vfd_segment_A | vfd_segment_E | vfd_segment_F | vfd_segment_G;
    break;
    case 'F':
      outputSegCode = vfd_segment_A | vfd_segment_E | vfd_segment_F | vfd_segment_G;
    break;
    case 'i':
      outputSegCode = vfd_segment_E;
    break;
    case 'E':
      outputSegCode = vfd_segment_A | vfd_segment_D | vfd_segment_E | vfd_segment_F | vfd_segment_G;
    break;
    case 'e':
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_D | vfd_segment_E | vfd_segment_F | vfd_segment_G;
    break;
    case 'S':
      outputSegCode = vfd_segment_A | vfd_segment_C | vfd_segment_D | vfd_segment_F | vfd_segment_G;
    break;
    case 's':
      outputSegCode = vfd_segment_A | vfd_segment_C | vfd_segment_D | vfd_segment_F | vfd_segment_G;
    break;
    case 'y':
      outputSegCode = vfd_segment_B | vfd_segment_C | vfd_segment_D | vfd_segment_F | vfd_segment_G;
    break;
    case 'Y':
      outputSegCode = vfd_segment_B | vfd_segment_C | vfd_segment_F | vfd_segment_G;
    break;
    case 'A':
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_C | vfd_segment_E | vfd_segment_F | vfd_segment_G;
    break;
    case 'I':
      outputSegCode = vfd_segment_B | vfd_segment_C;
    break;
    case 'd':
      outputSegCode = vfd_segment_B | vfd_segment_C | vfd_segment_D | vfd_segment_E | vfd_segment_G;
    break;
    case 'B':
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_C | vfd_segment_D | vfd_segment_E | vfd_segment_F | vfd_segment_G;
    break;
    case 'b':
      outputSegCode = vfd_segment_C | vfd_segment_D | vfd_segment_E | vfd_segment_F | vfd_segment_G;
    break;
    case 'L':
      outputSegCode = vfd_segment_D | vfd_segment_E | vfd_segment_F;
    break;
    case '*':
      outputSegCode = vfd_segment_A | vfd_segment_B | vfd_segment_F | vfd_segment_G;
    break;
    //vfd_segment_A | vfd_segment_B | vfd_segment_C | vfd_segment_D | vfd_segment_E | vfd_segment_F | vfd_segment_G;
  }
  return outputSegCode;
}

void update_vfd_char_array(char * char_array, char * characters){ //TODO the char_array parameter shouldn't be there
  for (unsigned int i = 0; i< 5; i++){  //TODO 5?
    char_array[i] = characters[i];
  }
}

void update_vfd_char_array(char* char_array, char c1, char c2, char c3, char c4, char c5){
  char_array[0] = c1;
  char_array[1] = c2;
  char_array[2] = c3;
  char_array[3] = c4;
  char_array[4] = c5;
}

float celsius_to_fahrenheit(float celsius) {
  float fh = (celsius * 9.0) / 5.0;
  fh += 32;
  return fh;
}

int decToBcd(int val) {
  return( (val/10*16) + (val%10) );
}

int bcdToDec(int val) {
  return( (val/16*10) + (val%16) );
}

void DS3231Manager::readDS3231time(unsigned char* second, unsigned char* minute, unsigned char* hour,
        unsigned char* dayOfWeek, unsigned char* dayOfMonth, unsigned char* month, unsigned char* year) {//DS3231
  Wire.beginTransmission(DS3231_I2C_ADDRESS);
  Wire.write(0); // set DS3231 register pointer to 00h
  Wire.endTransmission();
  Wire.requestFrom(DS3231_I2C_ADDRESS, 7);
  // request seven bytes of data from DS3231 starting from register 00h
  *second = bcdToDec(Wire.read() & 0x7f);
  *minute = bcdToDec(Wire.read());
  *hour = bcdToDec(Wire.read() & 0x3f);
  *dayOfWeek = bcdToDec(Wire.read());
  *dayOfMonth = bcdToDec(Wire.read());
  *month = bcdToDec(Wire.read());
  *year = bcdToDec(Wire.read());
}
void DS3231Manager::setDS3231time(unsigned char second, unsigned char minute, unsigned char hour, unsigned char dayOfWeek, 
        unsigned char dayOfMonth, unsigned char month, unsigned char year) {//DS3231
  // sets time and date data to DS3231
  Wire.beginTransmission(DS3231_I2C_ADDRESS);
  Wire.write(0); // set next input to start at the seconds register
  Wire.write(decToBcd(second)); // set seconds
  Wire.write(decToBcd(minute)); // set minutes
  Wire.write(decToBcd(hour)); // set hours
  Wire.write(decToBcd(dayOfWeek));
  Wire.write(decToBcd(dayOfMonth)); // set date (1 to 31)
  Wire.write(decToBcd(month)); // set month
  Wire.write(decToBcd(year)); // set year (0 to 99)
  Wire.endTransmission();
}