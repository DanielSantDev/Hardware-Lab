#define ex5

int pino8 = 8;    //pino led
int pino9 = 9;    //pino led
int pino10 = 10;  //pino led
int pino11 = 11;  //pino led
int pino12 = 12;  //pino led
int pino13 = 13;  //pino led

int buttonPin = 2; //pino do botao
int buzzerPin = 7; //pino do buzzer
int buttonState = 0;

//**************************************************************
#ifdef ex0

// Variaveis
int buttonState = 0; // Variavel do estado do botÃ£o
void setup() {
pinMode(pino8, OUTPUT);   //verde 1
pinMode(pino9, OUTPUT);   //amarelo 1
pinMode(pino10, OUTPUT);  //vermelho 1
pinMode(pino11, OUTPUT);  //verde 2
pinMode(pino12, OUTPUT);  //amarelo 2
pinMode(pino13, OUTPUT);  // vermelho 2
pinMode(buttonPin, INPUT); //botao 
pinMode(buzzerPin, OUTPUT); //buzzer
Serial.begin(9600);  //velocidade da serial
}

void loop() {
digitalWrite(pino8,HIGH);   //liga verde 1
digitalWrite(pino9,HIGH);   //liga amarelo 1
digitalWrite(pino10,HIGH);  //liga vermelho 1
digitalWrite(pino11,HIGH);  //liga verde 2
digitalWrite(pino12,HIGH);  //liga amarelo 2
digitalWrite(pino13,HIGH);  //liga vermelho 2

delay(1000); //tempo de 1 seg.

digitalWrite(pino8,LOW);  //desliga verde 1
digitalWrite(pino9,LOW);  //desliga amarelo 1
digitalWrite(pino10,LOW); //desliga vermelho 1
digitalWrite(pino11,LOW); //desliga verde 2
digitalWrite(pino12,LOW); //desliga amarelo 2
digitalWrite(pino13,LOW); //desliga vermelho 2

delay(1000); //tempo de 1 seg.

//Le o estado do botao 
buttonState = digitalRead(buttonPin);
Serial.println(buttonState);

tone(buzzerPin, 2000); //liga buzzer
delay(100);
noTone(buzzerPin); //desliga buzzer
}
#endif

//**************************************************************
#ifdef ex1
void setup() {
pinMode(pino8, OUTPUT);
pinMode(pino9, OUTPUT);
pinMode(pino10, OUTPUT);
pinMode(pino11, OUTPUT);
pinMode(pino12, OUTPUT);
pinMode(pino13, OUTPUT);
}
void loop() {
digitalWrite(pino10,HIGH);
delay(2000);
digitalWrite(pino10,LOW);
delay(1000);
digitalWrite(pino9,HIGH);
delay(2000);
digitalWrite(pino9,LOW);
delay(1000);
digitalWrite(pino8,HIGH);
delay(2000);
digitalWrite(pino8,LOW);
delay(1000);
digitalWrite(pino13,HIGH);
delay(2000);
digitalWrite(pino13,LOW);
delay(1000);
digitalWrite(pino12,HIGH);
delay(2000);
digitalWrite(pino12,LOW);
delay(1000);
digitalWrite(pino11,HIGH);
delay(2000);
digitalWrite(pino11,LOW);
delay(1000);
}
#endif

//**************************************************************
#ifdef ex2
void setup() {
pinMode(pino8, OUTPUT);
pinMode(pino9, OUTPUT);
pinMode(pino10, OUTPUT);
pinMode(pino11, OUTPUT);
pinMode(pino12, OUTPUT);
pinMode(pino13, OUTPUT);
pinMode(buzzerPin, OUTPUT);
Serial.begin(9600);
}
void loop() {
digitalWrite(pino9,HIGH);
tone(buzzerPin, 2000);
delay(200);
noTone(buzzerPin);
digitalWrite(pino13,HIGH);
delay(1000);
digitalWrite(pino9,LOW);
digitalWrite(pino13,LOW);
delay(2000);
digitalWrite(pino8,HIGH);
digitalWrite(pino12,HIGH);
tone(buzzerPin, 2000);
delay(200);
noTone(buzzerPin);
delay(1000);
digitalWrite(pino8,LOW);
digitalWrite(pino12,LOW);
delay(2000);
digitalWrite(pino10,HIGH);
digitalWrite(pino11,HIGH);
delay(1000);
digitalWrite(pino10,LOW);
digitalWrite(pino11,LOW);
delay(2000);
}
#endif

//**************************************************************
#ifdef ex3
void setup() {
pinMode(pino8, OUTPUT);
pinMode(pino9, OUTPUT);
pinMode(pino10, OUTPUT);
pinMode(pino11, OUTPUT);
pinMode(pino12, OUTPUT);
pinMode(pino13, OUTPUT);
pinMode(buttonPin, INPUT);
Serial.begin(9600);
}
void loop() {
buttonState = digitalRead(buttonPin);
Serial.println(buttonState);

  if(buttonState == LOW)
  {
digitalWrite(pino11,HIGH);
delay(1000);
digitalWrite(pino11,LOW); 
delay(2000);
digitalWrite(pino9,HIGH);
delay(1000);
digitalWrite(pino9,LOW); 
delay(2000);
digitalWrite(pino13,HIGH);
delay(1000);
digitalWrite(pino13,LOW);
delay(2000);
digitalWrite(pino8,HIGH);
delay(1000);
digitalWrite(pino8,LOW);
delay(2000);
digitalWrite(pino12,HIGH);
delay(1000);
digitalWrite(pino12,LOW);
delay(2000);
digitalWrite(pino10,HIGH);
delay(1000);
digitalWrite(pino10,LOW);
delay(2000);
  }
}
#endif

//**************************************************************
#ifdef ex4
void setup() {
pinMode(pino8, OUTPUT);
pinMode(pino9, OUTPUT);
pinMode(pino10, OUTPUT);
pinMode(pino11, OUTPUT);
pinMode(pino12, OUTPUT);
pinMode(pino13, OUTPUT);
pinMode(buttonPin, INPUT);
pinMode(buzzerPin, OUTPUT);
Serial.begin(9600);
}
void loop() {
buttonState = digitalRead(buttonPin);
Serial.println(buttonState);

digitalWrite(pino8,HIGH);
digitalWrite(pino11,HIGH);

  if(buttonState == LOW)
  {
digitalWrite(pino8,LOW);
digitalWrite(pino11,LOW);
digitalWrite(pino9,HIGH);   
digitalWrite(pino12,HIGH);
delay(1000);
digitalWrite(pino9,LOW);
digitalWrite(pino12,LOW);
digitalWrite(pino10,HIGH);  
digitalWrite(pino13,HIGH); 
tone(buzzerPin, 2000); 
delay(200);
noTone(buzzerPin); 
delay(3000);
digitalWrite(pino10,LOW);  
digitalWrite(pino13,LOW);
  }
}
#endif

//**************************************************************
#ifdef ex5

int ordem = 0;

void setup()
{
	pinMode(pino8, OUTPUT);
	pinMode(pino9, OUTPUT);
	pinMode(pino10, OUTPUT);
	pinMode(pino11, OUTPUT);
	pinMode(pino12, OUTPUT);
	pinMode(pino13, OUTPUT);
 	pinMode(buttonPin, INPUT);
	pinMode(buzzerPin, OUTPUT);
}
void loop(){
  
if(digitalRead(buttonPin)==0)
    {
      if(ordem<5)
        {
          	ordem++;
        }
      else
        {
          	ordem=0;
        }
      	delay(100);
    }
if(ordem==0)
    {
    	digitalWrite(pino8,1);
      	digitalWrite(pino11,0);
    }
  else if(ordem==1)
    {
     	digitalWrite(pino9,1);
      	digitalWrite(pino8,0);
    }
  else if(ordem==2)
    {
     	digitalWrite(pino10,1);
      	digitalWrite(pino9,0);
    }
  else if(ordem==3)
    {
    	digitalWrite(pino13,1);
      	digitalWrite(pino10,0);
    }
  else if(ordem==4)
    {
     	digitalWrite(pino12,1);
      	digitalWrite(pino13,0);
    }
  else if(ordem==5)
    {
     	digitalWrite(pino11,1);
      	digitalWrite(pino12,0);
        delay(1000);
    }
}
#endif
