// C++ code
//
int red=10;
int yellow=9;
int green=8;
void setup()
{
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
digitalWrite(red,1);
  delay(750);
digitalWrite(yellow,1);
delay(750);
  digitalWrite(yellow,0);
  delay(750);
  digitalWrite(yellow,1);
  delay(750);
  digitalWrite(yellow,0);
  delay(750);
  digitalWrite(yellow,1);
  delay(750);
  digitalWrite(yellow,0);
  digitalWrite(red,0);
  digitalWrite(green,1);
  delay(1000);
  digitalWrite(green,0);

  
}