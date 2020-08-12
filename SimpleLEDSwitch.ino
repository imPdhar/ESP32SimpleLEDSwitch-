
void setup()
{
  #define LED 2 
  pinMode(LED, OUTPUT);
  Serial.begin(230400);
  
}

void loop()
{
  touchRead(T8);
  if(touchRead(T8)<20)
  {
    digitalWrite(LED,HIGH);
    delay(3000);
    
  }
  digitalWrite(LED, LOW);
  delay(1000); 
  
   
  
}
