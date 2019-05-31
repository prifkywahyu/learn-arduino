#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int buttonPin1 = 0;
const int buttonPin2 = 1;
const int buttonPin3 = 6;
const int buttonPin4 = 7;
const int buttonPin5 = 8;
const int buttonPin6 = 9;
const int buttonPin7 = 10;
const int speakerPin = 13;

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int buttonState7 = 0;

void setup() {
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(13, OUTPUT);
  lcd.begin(16,2); 
  lcd.setCursor(3,0);
  lcd.print("Kelompok 3");
  delay(5000);
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("   A. FARHAN");
  lcd.setCursor(4,2);
  lcd.print("A. GALIH");
  delay(3000);
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("   RIFKY W.");
  lcd.setCursor(4,2);
  lcd.print("RINTO S.");
  delay(3000);
  lcd.clear(); 
}

void loop() {
  
  buttonState1 = digitalRead(0);
  buttonState2 = digitalRead(1);
  buttonState3 = digitalRead(6);
  buttonState4 = digitalRead(7);
  buttonState5 = digitalRead(8);
  buttonState6 = digitalRead(9);
  buttonState7 = digitalRead(10);

  lcd.noDisplay();
  if (buttonState1 == HIGH)
  { 
    lcd.display();
    lcd.setCursor(0,0);
    lcd.print("DO");
    tone(13, 262);
    delay(50);
  } 
  
  lcd.noDisplay();
  if (buttonState2 == HIGH)
  { 
    lcd.display();
    lcd.setCursor(0,0);
    lcd.print("  RE");  
    tone(13, 294);
    delay(50);
  }

  lcd.noDisplay();
  if (buttonState3 == HIGH)
  {
    lcd.display();
    lcd.setCursor(0,0);
    lcd.print("    MI");
    tone(13, 330);
    delay(50);
  }

  lcd.noDisplay();
  if (buttonState4 == HIGH)
  { 
    lcd.display();
    lcd.setCursor(0,0);
    lcd.print("      FA");
    tone(13, 349);
    delay(50);
  } 
  
  lcd.noDisplay();
  if (buttonState5 == HIGH)
  { 
    lcd.display();
    lcd.setCursor(0,0);
    lcd.print("        SO");
    tone(13, 395);
    delay(50);
  }

  lcd.noDisplay();
  if (buttonState6 == HIGH)
  { 
    lcd.display();
    lcd.setCursor(0,0);
    lcd.print("          LA");
    tone(13, 440);
    delay(50);
  }

  lcd.noDisplay();
  if (buttonState7 == HIGH)
  { 
    lcd.display();
    lcd.setCursor(0,0);
    lcd.print("            SI");
    tone(13, 494);
    delay(50);
  }

  else 
  {
    lcd.clear();
    tone(13, -100000);
  }
}
