#include <LiquidCrystal.h>

LiquidCrystal lcd(1, 2, 4, 5, 6, 7); 
 

byte first_half[8]= {
  B00100,
  B01110,
  B11111,
  B11111,
  B01111,
  B00111,
  B00011,
  B00001
};

byte second_half[8]= {
  B00100,
  B01110,
  B11111,
  B11111,
  B11110,
  B11100,
  B11000,
  B10000
};

byte smiley[8] = {
  B00000,
  B00000,
  B01010,
  B00000,
  B10001,
  B01110,
  B00000,
  B00000
};

void setup() { 
 lcd.begin(16,2);
 lcd.createChar(1, first_half);
 lcd.createChar(2, second_half);
 lcd.createChar(3, smiley);
};

void loop() { 
    lcd.setCursor(1,0);
    lcd.write(1);
    lcd.write(2);
    lcd.setCursor(4,1);  
    lcd.write(3);
    delay(1000);
    lcd.clear(); // Write a character to the LCD
  
}
