#include <LiquidCrystal.h>
LiquidCrystal lcd (2,3,4,5,6,7);
#define swth 8
# define 19
void setup() {
  // put your setup code here, to run once:
  pinMode(swth,INPUT);
  pinMode(swth1,INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  int data1=0;
  daat=digitalread(swth);
  data1=digitalread(swth1);
  if(data==HIGH)
  {
    lcd.begin(16,2);
    lcd.setCursor(0,0);
    lcd.print("Zunaisha Noor");
    delay(100);
  }
  if(data==LOW)
  {
    lcd.setCursor(0,0);
    lcd.print("Switch OFF");
    delay(100);
  }
  if(data1==HIGH)
  {
    
    lcd.setCursor(0,1);
    lcd.print("Biet-f21-049");
    delay(100);
    //
  }
  if(data1==LOW)
  {
    lcd.begin(16,2);
    lcd.setCursor(0,1);
    lcd.print("Switch OFF");
    delay(100);
  }
}
