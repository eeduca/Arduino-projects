int d=10;
int a;

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  
  
  for(a = 0; a < 256; a++)
  {
    analogWrite(5, a);
    delay(d);      
  }
  
  
  digitalWrite(4, LOW);
  digitalWrite(7, HIGH);
  
  
  for(a = 255; a >= 0; a--)
  {
    analogWrite(5, a);
    delay(d);
  }
  
  
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  
  
}
