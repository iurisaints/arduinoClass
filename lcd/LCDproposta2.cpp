// ## Display LCD 16x2

#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 3, en = 4, d4 = A2, d5 = A3, d6 = A4, d7 = A5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


// CODE THAT RUNS ONCE 
void setup() {
  
  // set up start communications
  Serial.begin(9600);
  Serial.println("initializing setup...");
  
  
  // ## Display LCD
  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Clear the display of the LCD.
  lcd.clear();
  // Display Message Initializing on Display LCD
  lcd.setCursor(0, 0);
  lcd.print("Initializing");
  delay (1000);
  lcd.setCursor(8, 1);
  lcd.print("SETUP...");
  delay (2000);
  lcd.clear();
  
  
  Serial.println("Project Display LCD setup");
  
  // Print a message to the LCD.
  Serial.println("PROJECT");
  lcd.setCursor(0, 0);
  lcd.print("PROJECT");
  delay(1000);
  Serial.println("Display LCD");
  lcd.setCursor(4, 1);
  lcd.print("Display LCD");
  delay(2000);
  lcd.clear();
  
  Serial.println("Carregando... ");
  
  // Iteração do display LCD inicial movendo as letras em um FOR LOOP
  for (int i = 0; i <= 15; i++) {
    lcd.setCursor(0, 0);
    lcd.print("Carregando...");
    lcd.setCursor(i, 1);
    lcd.print("*");
    delay (200);
    lcd.clear();
  	}
   
  Serial.println("## SETUP COMPLETED ##");
}


void montaTelaHello() {
  Serial.println("called montaTelaHello()");
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("HELLO");
  delay(1000);
  lcd.setCursor(8, 1);
  lcd.print("WORLD...");
  delay(1000);
  
}

void montaTelaBlank() {
  Serial.println("called montaTelaClear()");
  lcd.clear();
  delay(1000);
}



void loop() {

  montaTelaHello();
  montaTelaBlank();

}
