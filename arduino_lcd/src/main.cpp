#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal.h>

const int rs = 12, e = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, e, d4, d5, d6, d7);

int i=0;

void setup()
{
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.print("HobtechTV");
  
}

void loop()
{
  // put your main code here, to run repeatedly:
  lcd.scrollDisplayRight();
  i++;
  delay(100);
  if(i>6){
    i=0;
    lcd.setCursor(0,1);
    lcd.print("HobtechTV");
  }
}