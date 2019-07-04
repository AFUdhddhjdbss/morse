int income = 0;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(6, LOW);
  digitalWrite(3, HIGH);
  delay(3000);
  digitalWrite(6, HIGH);
}
