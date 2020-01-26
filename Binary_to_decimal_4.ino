
#include <LiquidCrystal.h>

LiquidCrystal lcd(1,2,4,5,6,7);
int a,b,c,d,e,f,g,h,sum;

void setup() {
 
lcd.begin(16,2);
  pinMode(0, INPUT);
  pinMode(3, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(14, INPUT);
  
}
void loop(){
 lcd.clear();
 a=0;
 b=0;
 c=0;
 d=0;
 e=0;
 f=0;
 g=0;
 h=0;
  int a=digitalRead(0);
  int b=digitalRead(3);
  int c=digitalRead(8);
  int d=digitalRead(9);
  int e=digitalRead(10);
  int f=digitalRead(11);
  int g=digitalRead(12);
  int h=digitalRead(14);
 sum=0;
 
 if(a==HIGH){
  sum=1;}
 if(b==HIGH){
  sum+=2;}
  if(c==HIGH){
  sum+=4;}
 if(d==HIGH){
  sum+=8;}
 if(e==HIGH){
  sum+=16;}
  if(f==HIGH){
  sum+=32;}
  if(g==HIGH){
  sum+=64;}
  if(h==HIGH){
  sum+=128;}
  if(a!=HIGH && b!=HIGH && c!=HIGH && d!=HIGH && e!=HIGH && f!=HIGH && g!=HIGH && h!=HIGH)
  {lcd.clear();
    sum=0;
    }
 lcd.setCursor(0,0);
 lcd.print("Equivalent"); 
 lcd.setCursor(0,1);
 lcd.print("Decimal=");
 lcd.setCursor(8,1);
 lcd.print(sum,DEC);
 delay(500);
 
}

