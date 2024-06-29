LiquidCrystal_I2C_AvrI2C lcd(0x27,16,2); 

void setup()
{

lcd.begin();
lcd.print( "Merhaba Dünya");
}
void loop()
{
lcd.display(); 
delay(500); 
lcd.noDisplay(); 
delay(500); 
}