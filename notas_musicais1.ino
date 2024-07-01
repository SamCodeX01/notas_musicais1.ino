// C++ code

int nota_do = 2;
int nota_re = 3;
int nota_mi = 4;
int nota_fa = 5;
int nota_sol = 6; 
int nota_la = 7; 
int nota_si = 8;

int buzzer = 9;

void setup()
{
  pinMode(nota_do, INPUT_PULLUP);
  pinMode(nota_re,INPUT_PULLUP);
  pinMode(nota_mi,INPUT_PULLUP);
  pinMode(nota_fa,INPUT_PULLUP);
  pinMode(nota_sol,INPUT_PULLUP);
  pinMode(nota_la,INPUT_PULLUP);
  pinMode(nota_si,INPUT_PULLUP);
  
  pinMode(buzzer, OUTPUT); 
}

void loop()
{
  if(digitalRead(nota_do) == LOW){
  	tone(buzzer, nota_do);
    delay(250);
    noTone(buzzer);
  }
   if(digitalRead(nota_re) == LOW){
  	tone(buzzer, nota_re);
    delay(250);
    noTone(buzzer);
  }
  
}