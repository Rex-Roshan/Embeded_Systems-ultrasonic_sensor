#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

int pinTemp=A0;
void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  lcd.begin(16,2);
  lcd.clear();
  //pinMode(pinTemp,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int temp=analogRead(pinTemp);
  temp=temp*0.48828125;
  //Serial.print("Temp: ");
  //Serial.print(temp);
  //Serial.println("f");
  lcd.print("Temperature:");
  lcd.setCursor(0,1);
  lcd.print(temp);
  lcd.setCursor(0,0); 
  delay(1000);
}
