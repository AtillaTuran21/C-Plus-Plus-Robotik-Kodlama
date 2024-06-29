void setup()
{
  for (int i = 0; i <= 13; i++)
    pinMode(i, OUTPUT); 
}
const int number[11] = {0b1000000, 0b1111001, 0b0100100, 0b0110000, 0b0011001, 0b0010010, 0b0000010, 0b1111000, 0b0000000, 0b0010000};

void loop()
{
  for (int tens = 0; tens < 10; tens++)

  {
    display_tens(tens);
  }
}

void display_tens(const int tens)
{
  int pin1, a, ones;     

  for (pin1 = 0, a = 0; pin1 < 7; pin1++, a++)
  {
    digitalWrite(pin1, bitRead(number[tens], a));
  }
  for (ones = 0; ones < 10; ones++)
  {
    display_ones(ones);
    delay(300); 
  }
}

void display_ones(const int x)
{ int pin2, b;             

  for (pin2 = 7, b = 0; pin2 <= 13; pin2++, b++)
  {
    digitalWrite(pin2, bitRead(number[x], b));

  }

}