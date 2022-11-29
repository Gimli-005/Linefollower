int BENABLE = 9; 
int BPHASE =  8;
int AENABLE = 6; 
int APHASE = 7;
int MODE = 4;
//int POTB = A0;
//int POTA= A1;
//int valA = 0;
//int valB = 0;         
//int Richting = 1;
void setup()
{
  pinMode(BENABLE, OUTPUT);
  pinMode (BPHASE, OUTPUT);

  pinMode(AENABLE, OUTPUT);
  pinMode (APHASE, OUTPUT);
    
}

void loop()
{
  digitalWrite(MODE, HIGH);
  
  //Motor 1 vooruit, traag-snel-traag
  digitalWrite(BPHASE,0);
  for(int i = 0; i<255; i++)
  {
    analogWrite(BENABLE,i);
    delay(5);
  }

  for(int i = 255; i>0; i--)
  {
    analogWrite(BENABLE,i);
    delay(5);
  }

//Motor 1 achteruit, traag-snel-traag
  digitalWrite(BPHASE,1);
  for(int i = 0; i<255; i++)
  {
    analogWrite(BENABLE,i);
    delay(5);
  }

  for(int i = 255; i>0; i--)
  {
    analogWrite(BENABLE,i);
    delay(5);
  }

 delay(500); 
 
//Motor 2 vooruit, traag-snel-traag
  digitalWrite(APHASE,0);
  for(int i = 0; i<255; i++)
  {
    analogWrite(AENABLE,i);
    delay(5);
  }

  for(int i = 255; i>0; i--)
  {
    analogWrite(AENABLE,i);
    delay(5);
  }

//Motor 2 achteruit, traag-snel-traag
  digitalWrite(APHASE,1);
  for(int i = 0; i<255; i++)
  {
    analogWrite(AENABLE,i);
    delay(5);
  }
   for(int i = 255; i>0; i--)
  {
    analogWrite(AENABLE,i);
    delay(5);
  } 
  delay(500);    
}
