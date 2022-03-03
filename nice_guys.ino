#include <LiquidCrystal_I2C.h>

#include <Wire.h>

LiquidCrystal_I2C lcd(0x3f, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  lcd.begin(16,2);
}

void loop() {
   lcd.clear();
   lcd.print("BUT!");
   delay(1000);

   lcd.clear();
   lcd.print("behind the scenes...");
   delay(1000);

   lcd.clear();
   lcd.print("...she means");
   delay(1000);

   lcd.clear();
   lcd.print("the world to me");
   delay(1000);

   lcd.clear();
   lcd.print("<3");
   delay(1000);

   lcd.clear();
   lcd.print("don't be racist");
   delay(1200);

   
/*
   lcd.clear();
   lcd.print("Wanna tell her that she's beautiful");
   delay(1000);

   lcd.clear();
   lcd.print("and show her that she's loved.");
   delay(1000);

    lcd.clear();
    lcd.print("Hold her hand when she's scared");
    delay(1000);

    lcd.clear();
    lcd.print("tell her how much I care...");
    delay(1000);

    lcd.clear();
    lcd.print("But that won't win her heart because...");
    delay(1000);

    lcd.clear();
    lcd.print("Nice guys finish last");
    delay(1000);

    lcd.clear();
    lcd.print("That's why I'll treat you like trash");
    delay(1000);
  */
}
