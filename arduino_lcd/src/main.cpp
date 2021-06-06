#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal.h>
#include <Keypad.h>

const int rs = 12, e = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, e, d4, d5, d6, d7);

const int ROW_NUM = 4;
const int COL_NUM = 3;

char keys[ROW_NUM][COL_NUM] = {
    {'A', 'B', 'C'},
    {'4', '5', '6'},
    {'7', '8', '9'},
    {'*', '0', '#'},
};

// Deklarasi koneksi ke mikro
byte pin_rows[ROW_NUM] = {7, 6, 1, 0};
byte pin_column[COL_NUM] = {8, 9, 10};

Keypad keypad = Keypad(makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COL_NUM);

void setup()
{
  // put your setup code here, to run once:
  lcd.begin(16, 2);
}

void loop()
{
  char key = keypad.waitForKey();
  lcd.print(key);
}