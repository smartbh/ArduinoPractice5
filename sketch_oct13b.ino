int piezo = 7;


void setup() 
{
  // put your setup code here, to run once:
  pinMode(piezo, OUTPUT);
}

void scalePlay(int sFreq)
{
  int sTime = (1.0/sFreq*1000000)/2;
  for (int i = 0; i < sFreq; i++)
  {
    digitalWrite(piezo,HIGH);
    delayMicroseconds(sTime);
    digitalWrite(piezo,LOW);
    delayMicroseconds(sTime);
  }
}

void loop() 
{
  // put your main code here, to run repeatedly:
  scalePlay(262);
  scalePlay(294);
  scalePlay(330);
  scalePlay(349);
  scalePlay(392);
  scalePlay(440);
  scalePlay(494);
  scalePlay(524);
}
