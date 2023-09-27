int green = 2;
int yellow = 3;
int red = 4;

int on = HIGH;
int off = LOW;

//================================

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(green, on);
  delay(100);
  digitalWrite(green, off);
  
  digitalWrite(yellow, on);
  delay(100);
  digitalWrite(yellow, off);
  
  digitalWrite(red, on);
  delay(100);
  digitalWrite(red, off);
}