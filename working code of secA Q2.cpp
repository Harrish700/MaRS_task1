int pot=A0;//potentiometer pin
int r=9,b=11,g=10,o=6; //Pin number for each color
int rv,bv,gv;        //Values of the colors
int potv,colorv,time; //values of potentiometer
void setup()
{
  pinMode(pot,INPUT);
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(o,OUTPUT);
}

void loop()
{
  potv=analogRead(pot);
  colorv=map(potv,0,1023,0,765); // mappping potentiometer values and colour codes
  if(colorv<=255){ //combo of red and green
    rv=255-colorv;
    gv=colorv;
    bv=0;
  }
  else if(colorv<=510){ //combo of green and blue
    rv=0;
    gv=510-colorv;
    bv=colorv-255;
  }
  else{ // combo of blue and red
    rv=colorv-510;
    gv=0;
    bv=765-colorv;
  }
  analogWrite(r,rv);
  analogWrite(b,bv);
  analogWrite(g,gv);
  time=map(potv,0,1023,100,1500); // mapping potentiometer values and blinking rate o led
  digitalWrite(o,HIGH);
  delay(time);
  digitalWrite(o,LOW);
  delay(time);
}
