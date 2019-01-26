void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(7,OUTPUT);
}
int tempoVerdeLampeggia = 250;
int tempoRosso = 3000;
int tempoGiallo = 2000;
int ripetizioniVerdeLampeggia = 4;
int pinVerde1 = 4;
int pinVerde2 = 7;
int pinGiallo1 = 5;
int pinGiallo2 = 2;
int pinRosso1 = 6;
int pinRosso2 = 3;
int zero = 0;
void loop() {
  // put your main code here, to run repeatedly:
  RossoVerdeAcceso(pinRosso1,pinVerde2);
  VerdeLampeggia(pinVerde2);
  RossoVerdeSpento(pinRosso1,pinVerde2);
  RossoVerdeAcceso(pinVerde1,pinRosso2);
  VerdeLampeggia(pinVerde1);
  RossoVerdeSpento(pinVerde1,pinRosso2);
}

void VerdeLampeggia(int pinLed)
{
  for (int i = zero; i < ripetizioniVerdeLampeggia; i++) {
    digitalWrite(pinLed,HIGH);
    delay(tempoVerdeLampeggia);
    digitalWrite(pinLed,LOW);
    delay(tempoVerdeLampeggia);
  }
  GialloAcceso(pinGiallo1,pinGiallo2);
  delay(tempoGiallo);
  GialloSpento(pinGiallo1,pinGiallo2);
}

void RossoVerdeAcceso(int pinLed,int pinLed2)
{
  digitalWrite(pinLed,HIGH);
  digitalWrite(pinLed2,HIGH);
  delay(tempoRosso);
}

void RossoVerdeSpento(int pinLed,int pinLed2)
{
  digitalWrite(pinLed,LOW);
  digitalWrite(pinLed2,LOW);
}

void GialloAcceso(int pinLedd, int pinLedd2)
{
  digitalWrite(pinLedd,HIGH);
  digitalWrite(pinLedd2,HIGH);
}

void GialloSpento(int pinLedd, int pinLedd2)
{
  digitalWrite(pinLedd,LOW);
  digitalWrite(pinLedd2,LOW);
}
