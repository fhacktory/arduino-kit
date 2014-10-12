/*
 * The circuit:
 * LCD RS pin to digital pin 8
 * LCD Enable pin to digital pin 9
 * LCD D4 pin to digital pin 4
 * LCD D5 pin to digital pin 5
 * LCD D6 pin to digital pin 6
 * LCD D7 pin to digital pin 7
 * LCD BL pin to digital pin 10
 * KEY pin to analogl pin 0
 * Vcc pin to  +5
 */

#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7);

void setup()
{
  lcd.clear(); 
  lcd.begin(16, 2);
  lcd.setCursor(0,0); 
  lcd.print(" * fHACKtory *"); 
}

void loop()
{
  lcd.clear(); 
  lcd.setCursor(0,0); 
  lcd.print(" * fHACKtory *"); 
  delay(1000);              // wait for a second
  lcd.clear(); 
  delay(1000);              // wait for a second
}



