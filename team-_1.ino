#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 9, en = 8, d4 = 7, d5 = 6, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int m=0;
int n=0;
int ir=0;
int a=0;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600);
   pinMode(2,OUTPUT);//dc motor
  pinMode(3,OUTPUT);//dc motor
  // Print a message to the LCD.
  
}

void loop() {
  // Turn off the display:
  Serial.println("press 1 to detect");
  delay(1000);
  ir=Serial.parseInt();
  delay(1000);
  
  if(ir==1)
 {
  
 
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    delay(1000);
  
  Serial.println("enter frequency");
    delay(1000);
  a=Serial.parseInt();
  delay(1000);
  if (a>25 && a<80)
  {
    lcd.setCursor(0,1);
    m=m+20;
    lcd.print("total=");
    delay(500);
    lcd.print(m);
    delay(500);
    n++;
    delay(100);
      }
 else if (a>80 && a<160)
  {
    lcd.setCursor(0,1);
    m=m+50;
    lcd.print("total=");
    delay(500);
    lcd.print(m);
    delay(500);
    n++;
    delay(100);
  }
  else if (a>160 && a<240)
  {
    lcd.setCursor(0,1);
    m=m+500;
    lcd.print("total=");
    delay(500);
    lcd.print(m);
    delay(500);
    n++;
    delay(100);
  }
  else
  {
    lcd.setCursor(0,1);
    lcd.print(" Invalid  ");
    delay(100);
   
  }
 lcd.setCursor(0,0); 
 lcd.print("notes=");
  lcd.print(n);
  delay(500);
  
  }
  }
