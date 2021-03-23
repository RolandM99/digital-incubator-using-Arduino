
// Digital_Incubator by ROLAND MANFUL MWEZE
//Powered by UzuriTech
#include<LiquidCrystal.h>
LiquidCrystal lcd (12, 11, 5, 4, 3, 2);
// initialization
int fan = 6;
int bulb = 8;
int ldrPin = 6;
float temp;
int tempPin=0;
int ldrstate = 0;
float Celcius = temp/10;
void setup()
{
pinMode (fan, OUTPUT);
lcd.print ("UZURI-TECH");
delay (5000); // 5 Seconds Delay
lcd.clear();
lcd.print ("DIGITAL INCUBATOR USING ARDUINO");
pinMode (bulb, OUTPUT);
pinMode (ldrPin, INPUT);
Serial.begin (9600); // Setting the Baud Rate
lcd.begin (16, 2); // Activating both Rows of LCD
delay (5000);
lcd.clear();
lcd.print ("by");
delay (5000);
lcd.clear ();
lcd.print ("ROLAND MANFUL");
delay (5000);
lcd.clear ();
lcd.print ("DIGITAL INCUBATOR");
delay (5000);
lcd.clear ();
lcd.print ("Initialization");
delay (5000);
lcd.clear ();
lcd.print ("Temperature = ");
}
void loop ()
{
ldrstate = digitalRead (ldrPin); // Reading the LDR State
temp = analogRead (tempPin); // Reading the Temperature
temp = temp*0.48828125; // Conversion Factor
delay (1000);
Serial.println (temp); // Printing in Serial Monitor
Serial.println ("Celcius");
lcd.print (temp);
lcd.setCursor(0,1);
lcd.print (" ° C");
if (ldrstate == HIGH)
{
if (temp>36) // Maintaining the Range 32 – 36.
{
digitalWrite (fan, HIGH);
digitalWrite (bulb, LOW);
}
else if (temp<32)
{
digitalWrite (fan, LOW);
digitalWrite (bulb, HIGH);
}
else
{
digitalWrite (fan, LOW);
digitalWrite (bulb, LOW);
}
}
else
{
if (temp>36)
{
digitalWrite (fan, HIGH);
delay (800);
digitalWrite (fan, LOW);
delay (200);
digitalWrite (bulb, LOW);
}
else if (temp<32)
{
digitalWrite (fan, LOW);
digitalWrite (bulb, HIGH);
}
else
{
digitalWrite (fan, LOW);
digitalWrite (bulb, LOW);
}
}
}