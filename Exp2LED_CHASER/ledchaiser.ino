void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);   
  pinMode(4, OUTPUT);

}

void loop()
{
  for(int i=1;i<=3;i++)
  {  
   digitalWrite(i, HIGH);
   digitalWrite(i+1, HIGH);
   delay(80); // Wait for 1000 millisecond(s)
   digitalWrite(i, LOW);
   digitalWrite(i+1, LOW);
  } 
}  
