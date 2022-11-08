// Mensagem de LCD mais contador 

#include <LiquidCrystal.h>

int seconds = 0;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2); // numero de colunas no LCD.

  // Mensagem mostrada no  LCD.
  lcd_1.print("Ola, mundo !");
}

void loop()
{
  
  lcd_1.setCursor(0, 1);
  // tempo para  reset:
  lcd_1.print(seconds);
  delay(1000); //tempo de  1000 millisecond(s)
  seconds += 1;
}
