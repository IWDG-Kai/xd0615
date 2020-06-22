#define time_len 200
void setup()
{
  int i;
  for(i=1;i<9;i++)
  {
	pinMode(i, OUTPUT);
  }
  
}

void loop()
{
  int i;
  for(i=1;i<9;i++)
  {
	digitalWrite(i, HIGH);
    delay(time_len); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    delay(time_len); // Wait for 1000 millisecond(s)
  }
  for(i=8;i>0;i--)
  {
	digitalWrite(i, HIGH);
    delay(time_len); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    delay(time_len); // Wait for 1000 millisecond(s)
  }
  for(i=1;i<9;i++)
  {
	digitalWrite(i, HIGH);
    digitalWrite(10-i, HIGH);
    delay(time_len); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    digitalWrite(10-i, LOW);
    delay(time_len); // Wait for 1000 millisecond(s)
  }
}