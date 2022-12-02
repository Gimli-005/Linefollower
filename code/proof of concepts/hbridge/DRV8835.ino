int IN2= 11; //BENABLE
int IN1=  10; //BPHASE
int IN4= 3; //AENABLE
int IN3 = 9; //APHASE



void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode (IN2, OUTPUT);

  pinMode(IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
    
}

void loop()
  {
// Voorwaarts
    for (int i = 0; i <= 255; i++)
    {
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, 0);
      analogWrite(IN4, i);
      delay(10);
    }
    for (int i = 255; i >= 0; i--)
    {
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, 0);
      analogWrite(IN4, i);
      delay(10);
    }

    delay(2000);

    // Achterwaarts
    for (int i = 0; i <= 255; i++)
    {
      analogWrite(IN1, 0);
      analogWrite(IN2, i);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
      delay(10);
    }
    for (int i = 255; i >= 0; i--)
    {
      analogWrite(IN1, 0);
      analogWrite(IN2, i);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
      delay(10);
    }

    delay(2000);

    // Links
    for (int i = 0; i <= 255; i++)
    {
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
      delay(10);
    }
    for (int i = 255; i >= 0; i--)
    {
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
      delay(10);
    }

    delay(2000);

    // Rechts
    for (int i = 0; i <= 255; i++)
    {
      analogWrite(IN1, 0);
      analogWrite(IN2, i);
      analogWrite(IN3, 0);
      analogWrite(IN4, i);
      delay(10);
    }
    for (int i = 255; i >= 0; i--)
    {
      analogWrite(IN1, 0);
      analogWrite(IN2, i);
      analogWrite(IN3, 0);
      analogWrite(IN4, i);
      delay(10);
    }
  }
