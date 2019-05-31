#include <LiquidCrystal.h>
#include <Ultrasonic.h>

LiquidCrystal lcd(2, 3, 4, 5, 6 , 7);
const int trigPin = A1;
const int echoPin = A2;
int sensorPin = A0;
int period = 20;
double alpha = 0.75;
double change = 0.0;

int minimum = 60;
int maximum = 100;
const unsigned int distance = 406;

void setup() {
  lcd.begin(16, 2);

  pinMode(sensorPin, INPUT);
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
}

void loop() {
  unsigned long t1;
  unsigned long t2;
  unsigned long pulse_width;
  float cm;
  float inches;

  static double oldValue = 0;
  static double oldChange = 0;
 
  int beat = analogRead (sensorPin);
  double value = alpha * oldValue + (0 - alpha) * beat;
  change = value - oldValue;
  int readBeat = beat/10;

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  while (digitalRead(echoPin) == 0);

  t1 = micros();
  while (digitalRead(echoPin) == 1);
  t2 = micros();
  pulse_width = t2 - t1;

  cm = pulse_width / 58.0;
  inches = pulse_width / 148.0;

  if (pulse_width < distance) {
    lcd.setCursor (0,0);
    lcd.print ("Beat: ");
    lcd.print (readBeat);
    lcd.print (" bpm");
    
    oldValue = value;
    oldChange = change;
    delay(period*10);

    lcd.noDisplay();
    delay(10);
    lcd.display();
    delay(1000);
    lcd.clear();
    
      if (readBeat > minimum && readBeat < maximum) {
        lcd.setCursor (0,1);
        lcd.print ("Normal");
        lcd.noDisplay();
        delay(50);
        lcd.display();
        delay(1000); }
      else {
        lcd.setCursor (0,1);
        lcd.print ("Tidak Normal");
        lcd.noDisplay();
        delay(50);
        lcd.display();
        delay(1000); }
        lcd.clear(); }
        
    else {
      lcd.setCursor (0,0);
      lcd.print ("NULL"); }

  delay(500);
}

