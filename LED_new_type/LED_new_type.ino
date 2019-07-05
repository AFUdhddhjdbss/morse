int income =30;
int i=9;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  
}

void loop()
{
  if (Serial.available()>0)
  {
  income =Serial.read();
  income = income-'0';
  setPin(5, income&1);
  setPin(2, (income>>1)&1);
  setPin(3, (income>>2)&1);
  setPin(4, (income>>3)&1);

  delay(30);
  digitalWrite(i,LOW);
  digitalWrite(i, HIGH);
  i--;
  if (i==5)
    {
      i=9;}
  
  delay(10);
  }
}
  
void setPin(int pin,int v)
{
  if(v>0)
  {
    digitalWrite(pin, HIGH);
  }
  else
  {
    digitalWrite(pin, LOW);
  }
}
