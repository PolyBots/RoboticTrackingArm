#include <Servo.h>

Servo myservo1;  // forward/back
Servo myservo2;  // rotate left/right

int neg = 0;
int pos = 180;
int noChange = 90;
int smallAdjust = 150;

void setup()
{
  myservo1.attach(9); // attached to pin 9
  myservo2.attach(10); // attached to pin 8
}

void loop()
{
  for (int i = 0; i < 3; i++)
  {
    myservo1.write(pos);
    delay(smallAdjust);
    myservo1.write(noChange); 
    delay(500);

    myservo2.write(pos);
    delay(smallAdjust);
    myservo2.write(noChange);
    delay(500);
  }

    for (int i = 0; i < 3; i++)
  {
    myservo1.write(neg);
    delay(smallAdjust);
    myservo1.write(noChange); 
    delay(500);

    myservo2.write(neg);
    delay(smallAdjust);
    myservo2.write(noChange);
    delay(500);
  }
}
