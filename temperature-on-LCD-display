#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int sensePin = A0;  
int sensorInput; 
double temp, temperature;
int buzzPin = 13, redPin = 8, greenPin = 9, bluePin = 10;


void setup()
{
  
  lcd.begin(16, 2);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

}

void loop()
{
  
     digitalWrite(redPin, LOW);
     digitalWrite(bluePin, LOW);
     digitalWrite(greenPin, LOW);
     noTone(buzzPin);

  sensorInput = analogRead(A0);
  temperature = double(sensorInput)/1024*5-0.5;
  temp = temperature * 100;
  
  if (temp > 35) 
  {
     digitalWrite(redPin, HIGH);
     digitalWrite(bluePin, LOW);
     digitalWrite(greenPin, LOW);
     tone(buzzPin, 1000);
    
  }
  
  if (temp < 15) 
  {
     digitalWrite(redPin, LOW);
     digitalWrite(bluePin, HIGH);
     digitalWrite(greenPin, LOW);
	 tone(buzzPin, 1000);

  }
  
  if (temp > 15 && temp < 35) 
  {
     digitalWrite(redPin, LOW);
     digitalWrite(bluePin, LOW);
     digitalWrite(greenPin, HIGH);
  }
  lcd.clear();
  lcd.print(temp);
  delay(200);    
}
