#define pinA 3
#define pinB 4
#define pinC 5
#define pinD 6
#define inpin1 9
#define inpin2 12
#define inpin3 8
#define inpin4 10
#define inpin5 13
#define inpin6 11

void isrn(){
  if((digitalRead(inpin1)!=LOW)&& (digitalRead(inpin2)!=LOW)&& (digitalRead(inpin3)!=LOW)&& (digitalRead(inpin4)!=LOW)&&(digitalRead(inpin5)!=LOW)&& (digitalRead(inpin6)!=LOW));
  {Serial.println("0");
    digitalWrite(pinA, LOW);
   digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
     digitalWrite(pinD, LOW);}
  
}
void isr1(){
  if(digitalRead(inpin1)==LOW)
  {
    Serial.println("1");
  digitalWrite(pinA, HIGH);
   digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
     digitalWrite(pinD, LOW);
  }
}
void isr2(){
   
  if(digitalRead(inpin2)==LOW)
  {Serial.println("2");
    digitalWrite(pinA, LOW);
   digitalWrite(pinB, LOW);
    digitalWrite(pinC, HIGH);
     digitalWrite(pinD, LOW);
  }
}
void isr3(){
  if(digitalRead(inpin3)==LOW)
  {
     Serial.println("3");
  digitalWrite(pinA, HIGH);
   digitalWrite(pinB, LOW);
    digitalWrite(pinC, HIGH);
     digitalWrite(pinD, LOW);
  }
}
void isr4(){
  if(digitalRead(inpin4)==LOW)
  {
     Serial.println("4");
  digitalWrite(pinA, LOW);
   digitalWrite(pinB, HIGH);
    digitalWrite(pinC, LOW);
     digitalWrite(pinD, LOW);
  }
}
void isr5(){
  if(digitalRead(inpin5)==LOW)
  {
     Serial.println("5");
  digitalWrite(pinA, HIGH);
   digitalWrite(pinB, HIGH);
    digitalWrite(pinC, LOW);
     digitalWrite(pinD, LOW);
  }
}
void isr6(){
 if(digitalRead(inpin6)==LOW)
  {
     Serial.println("6");
  digitalWrite(pinA, LOW);
   digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
     digitalWrite(pinD, LOW);
  }
}

void setup()
{
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(pinC,OUTPUT);
  pinMode(pinD,OUTPUT);
  pinMode(inpin1,INPUT_PULLUP);
  pinMode(inpin2,INPUT_PULLUP);
  pinMode(inpin3,INPUT_PULLUP);
  pinMode(inpin4,INPUT_PULLUP);
  pinMode(inpin5,INPUT_PULLUP);
  pinMode(inpin6,INPUT_PULLUP);
  Serial.begin(9600);
  
}

void loop()
{
  isrn();
  isr1();
  isr2();
  isr3();
  isr4();
  isr5();
  isr6();
  delay(10);
}
