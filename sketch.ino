#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Set the LCD I2C address and dimensions
int x;

void setup() {
  pinMode(A0, INPUT);

  Serial.begin(9600);
  lcd.init();            // Initialize the LCD
  lcd.backlight();       // Turn on the backlight
}

void loop() {
  x=analogRead(A0);
  lcd.setCursor(0, 0);
  lcd.print("LPG Capacity: ");
  lcd.setCursor(0, 1);
  lcd.print(x);
}
