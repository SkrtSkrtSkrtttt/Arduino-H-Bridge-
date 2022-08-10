
//  Naafiul Hossain 
// Mech w/ Labview
// H-Bridge Task 3


void setup()
{
pinMode(12, OUTPUT);
pinMode(2, OUTPUT);
}

void ccw()
{
digitalWrite(12, 0);
digitalWrite(2, 1);
delay(1000);
}

void brake()
{
digitalWrite(12, 0);
digitalWrite(2, 0);
delay(1000);
}

void cw()
{
digitalWrite(12, 1);
digitalWrite(2, 0);
delay(1000);
}

void coast()
{
digitalWrite(12, 1);
digitalWrite(2, 1);
delay(1000);
}

void drive(int x)
{
if (x==0)
{

ccw();
}
if (x==1)
{
brake();
}
if (x==2)
{
cw();
}
if (x==3)
{
coast();
}
}

void loop()
{
drive(12);
}

  
