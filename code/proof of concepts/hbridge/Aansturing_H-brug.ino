int BENABLE = 7; 
int BPHASE =  5;
int AENABLE = 12; 
int APHASE = 10;
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
  //Motor 1 vooruit, traag-snel-traag
  analogWrite(BENABLE,0);
  for(int i = 0; i<256; i++)
  {
    analogWrite(BPHASE,i);
    delay(5);
  }

  for(int i = 256; i>0; i--)
  {
    analogWrite(BPHASE,i);
    delay(5);
  }

//Motor 1 achteruit, traag-snel-traag
  analogWrite(BENABLE,1);
  for(int i = 0; i<256; i++)
  {
    analogWrite(BPHASE,i);
    delay(5);
  }

  for(int i = 256; i>0; i--)
  {
    analogWrite(BPHASE,i);
    delay(5);
  }


//Motor 2 vooruit, traag-snel-traag
  analogWrite(AENABLE,0);
  for(int i = 0; i<256; i++)
  {
    analogWrite(APHASE,i);
    delay(5);
  }

  for(int i = 256; i>0; i--)
  {
    analogWrite(APHASE,i);
    delay(5);
  }

//Motor 2 achteruit, traag-snel-traag
  analogWrite(AENABLE,1);
  for(int i = 0; i<256; i++)
  {
    analogWrite(APHASE,i);
    delay(5);
  }
   for(int i = 256; i>0; i--)
  {
    analogWrite(APHASE,i);
    delay(5);
  }  
}