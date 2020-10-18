#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,7,6,5,4);
int led=13;               
int pir=3;                      
int val=0; 
int buzz=2;
 
void setup() {
  pinMode(buzz,OUTPUT);
  pinMode(led, OUTPUT);  
  pinMode(pir,INPUT);
  lcd.begin(16,2); 
}
 
void loop()
{
  val=digitalRead(pir);  
  if(val==HIGH)
  { 
    
    digitalWrite(led, HIGH); 
    lcd.setCursor(0,0);
    lcd.print("Motion Detected!");
    tone(2,500,500);
    delay(2000);   
  }
  else
  {
    digitalWrite(led,LOW);
    lcd.setCursor(0,0);          
    lcd.print("No Motion       ");
    lcd.setCursor(0,2);
    lcd.print("Detected        ");
    delay(1000);
              
  }
    digitalWrite(led,LOW);
    lcd.setCursor(0,0);          
    lcd.print("                  ");
    lcd.setCursor(0,2);
    lcd.print("                  ");
    delay(1500);
}
