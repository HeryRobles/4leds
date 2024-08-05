// C++ code
//
int tiempo=250;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(13, 1);
  delay(tiempo); 
  digitalWrite(13, 0);
  delay(tiempo);
  digitalWrite(12, 1);
  delay(tiempo); 
  digitalWrite(12, 0);
  delay(tiempo);
  digitalWrite(11, 1);
  delay(tiempo); 
  digitalWrite(11, 0);
  delay(tiempo);
  digitalWrite(10, 1);
  delay(tiempo); 
  digitalWrite(10, 0);
  delay(tiempo);
  digitalWrite(11, 1);
  delay(tiempo); 
  digitalWrite(11, 0);
  delay(tiempo);
  digitalWrite(12, 1);
  delay(tiempo); 
  digitalWrite(12, 0);
  delay(tiempo);
  digitalWrite(13, 1);
  delay(tiempo); 
  digitalWrite(13, 0);
  delay(tiempo);
}