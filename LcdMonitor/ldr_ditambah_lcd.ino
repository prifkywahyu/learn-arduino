#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16,2);
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int LDR = A0;
  int LED = 13;
  int nilaiLDR = 0;
  nilaiLDR = analogRead(A0);
  Serial.print("NilaiLDR= ");
  Serial.println(nilaiLDR);
    if(nilaiLDR < 50) {
      digitalWrite(LED, HIGH);
    }
    else {
      digitalWrite(LED, LOW);
    }

}

