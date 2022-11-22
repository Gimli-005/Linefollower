int state = 0;

void setup() 
{
  pinMode(9, OUTPUT);
  Serial.begin(9600);
  //Serial1.begin(9600);
}
void loop() 
{
  
  if(Serial.available()>0)
  {
    state = Serial.read();
  
    if (state == '0')
    {
      digitalWrite(9, LOW);
      Serial.println("led: off");
      state = 0;
    }
    if (state == '1')
    {
      digitalWrite(9, HIGH);
      Serial.println("led: on");
      state = 1;
    }
  }  
}
