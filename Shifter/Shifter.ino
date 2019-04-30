#define pinA 53
#define pinB 4
#define pinC 5
#define pinD 6
#define inpin1 8
#define inpin2 9
#define inpin3 10
#define inpin4 11
#define inpin5 12
#define inpin6 13
#define cooldown_up 100
#define cooldown_down 600
#define H_1 33
#define H_2 41
#define out_main 45
int gcounter=0;
byte gear=3;
boolean state = false;
boolean state2 = false;
uint32_t prev_time;
void changestatetrue(){
  state = true;
}
void changestatefalse(){
state = false;
}
void changestatetrue2(){
  state2 = true;
}
void changestatefalse2(){
state2 = false;
}
void setup()  {
  pinMode(48,INPUT_PULLUP);
  pinMode(34,INPUT_PULLUP);
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
    //pinMode(48,INPUT);
  //pinMode(34,INPUT);
  pinMode(45,OUTPUT);
  pinMode(41,OUTPUT);
  pinMode(33,OUTPUT);
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(pinC,OUTPUT);
  pinMode(pinD,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(3),changestatefalse,HIGH);
 //attachInterrupt(digitalPinToInterrupt(2),changestatetrue,FALLING);
  attachInterrupt(digitalPinToInterrupt(2),changestatefalse2,HIGH);
  
  
  Serial.begin(115200);
}

void loop() {
  Serial.println(gcounter);
  if (digitalRead(3) == LOW && !state)
  { if(gcounter!=6)
    {
        upshift();
        gcounter++;
        state=true;
        Serial.println("up");
        delay(100);
    }
  }

  if (digitalRead(2) == LOW && !state2)
  {
    if(!gcounter==0)
    {
          downshift();
          gcounter--;
          state2=true;
          Serial.println("down");
          delay(100);
    }

  }

  //state = false;
  //isr1();
  //isr2();
  //isr3();
  //isr4();
  //isr5();
  //isr6();
  //isrn();
}


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
