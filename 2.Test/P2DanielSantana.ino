#define per5

int buttonPin1 = 2; // botÃ£o 1
int buttonPin2 = 3; // botÃ£o 2
int buzzerPin = 8; // buzzer
int ledPin1 = 12; //Led 1
int ledPin2 = 13; //Led 2
int ldrPin = 0; //LDR no pino analÃgico A0
int ldrValor; //Valor lido do LDR
int buttonState1; // Valor lido do botÃ£o 1
int buttonState2; // Valor lido do botÃ£o 2

#ifdef per0
void setup() {
  pinMode(ledPin1,OUTPUT); //define o pino 9 como saÃda
  pinMode(ledPin2,OUTPUT); //define o pino 10 como saÃda
  pinMode(buttonPin1, INPUT); // define o pino 2 como entrada
  pinMode(buttonPin2, INPUT); // define o pino 3 como entrada
  pinMode(buzzerPin, OUTPUT); //define o pino 8 como saÃda
  Serial.begin(9600); //Inicia a comunicaÃ§Ã£o serial
}

void loop() {
  ldrValor = analogRead(ldrPin);
  Serial.print("ldrValor: ");
  Serial.println(ldrValor);
  buttonState1 = digitalRead(buttonPin1);
  Serial.print("buttonState1: ");
  Serial.println(buttonState1);
  buttonState2 = digitalRead(buttonPin2);
  Serial.print("buttonState2: ");
  Serial.println(buttonState2);
  tone(buzzerPin, 2000); //liga buzzer
  delay(200);
  noTone(buzzerPin); //desliga buzzer
  digitalWrite(ledPin1,HIGH);
  delay(1000);
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,HIGH);
  delay(1000);
  digitalWrite(ledPin2,LOW);
}

#endif

//*************************************************************

#ifdef per1

void setup(){
  pinMode(ledPin1,OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  ldrValor = analogRead(ldrPin);
  Serial.print("ldrValor: ");
  Serial.println(ldrValor);
  if(ldrValor <= 800) {
    digitalWrite(ledPin1,LOW);
    noTone(buzzerPin);    
  }else{
    digitalWrite(ledPin1,HIGH);
    tone(buzzerPin, 2000);
    delay(200);
  }
}

#endif

//*************************************************************

#ifdef per2

void setup(){
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  ldrValor = analogRead(ldrPin);
  Serial.print("ldrValor: ");
  Serial.println(ldrValor);
    if(ldrValor <= 700)
    {
      digitalWrite(ledPin1,LOW);
      digitalWrite(ledPin2,LOW);
      noTone(buzzerPin);
    }else if(ldrValor>=701 && ldrValor<=900){
      digitalWrite(ledPin1,HIGH);
      digitalWrite(ledPin2,LOW);
      noTone(buzzerPin);
	}else if(ldrValor>=901){
      digitalWrite(ledPin1,HIGH);
	  digitalWrite(ledPin2,HIGH);
      tone(buzzerPin, 2000);
      delay(200);
  }
}

#endif

//*************************************************************

#ifdef per3

void setup(){
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT); 
  Serial.begin(9600);
}

void loop(){
  buttonState1 = digitalRead(buttonPin1);
  Serial.print("buttonState1: ");
  Serial.println(buttonState1);
  buttonState2 = digitalRead(buttonPin2);
  Serial.print("buttonState2: ");
  Serial.println(buttonState2);
  if(buttonState1 == 0)
  {
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,HIGH);
  }else if(buttonState2 == 0){
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin1,HIGH);
  }
}

#endif

//*************************************************************

#ifdef per4
int led1(int state);
int led2(int state);
int buzzer(int state);

void setup(){
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
  }

void loop(){
  buttonState1 = digitalRead(buttonPin1);
  Serial.print("buttonState1: ");
  Serial.println(buttonState1);
  buttonState2 = digitalRead(buttonPin2);
  Serial.print("buttonState2: ");
  Serial.println(buttonState2);
  led1(buttonState1);
  led2(buttonState2);
  buzzer(buttonState2);
}

int led1(int state){
	if(state == 0){
    digitalWrite(ledPin1,HIGH);
    }else{
    digitalWrite(ledPin1,LOW);
	}
  return state;
}

int led2(int state){
	if(state == 0){
    digitalWrite(ledPin2,HIGH);
    }else{
    digitalWrite(ledPin2,LOW);
	}
  return state;
}
int buzzer(int state){
  if(state == 0){
  	 tone(buzzerPin, 2000);
     delay(200);
  }else{
    noTone(buzzerPin);
  }
	return state;
}
#endif

//*************************************************************

#ifdef per5

int ldr(int stateLDR);
int led1(int state);
int led2(int state);
int buzzer(int state);

void setup(){
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  ldr(ldrValor);
  led1(ldrValor);
  led2(ldrValor);
  buzzer(ldrValor);
}

int ldr(int ldrState){
    ldrValor = analogRead(ldrPin);
    ldrState=ldrValor;
    Serial.print("ldrValor: ");
    Serial.println(ldrValor);
    return ldrState;
}

int led1(int state){
    if(state <= 729)
    {
      digitalWrite(ledPin1,LOW);
    }else if(state >= 730){
      digitalWrite(ledPin1,HIGH);
    }
	return state;
}
int led2(int state){
    if(state <= 900){
      digitalWrite(ledPin2,LOW);
    }else if(state >= 901){
      digitalWrite(ledPin2,HIGH);
    }
    return state;
}
int buzzer(int state){
  if(state <= 900){
  noTone(buzzerPin);
  }else if(state >= 910){
  tone(buzzerPin, 2000);
  delay(200);
  }
}
#endif