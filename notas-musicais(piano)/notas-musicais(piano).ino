//para armazenar os pinos 
const int pino_botao1 = 7;//b1=verde
const int pino_botao2 = 8;//b2=laranja
const int pino_botao3 = 9;//b3=vermelho
const int pino_botao4 = 2;//b4=azul
const int pino_botao5 = A1;//b5=amarelo
const int pino_botao6 = 0;//b6=branco
const int pino_botao7 = A0;//b7=verde2
const int pino_buzzer = 10;//buzzer
const int pino_LED1 = 11;//verde
const int pino_LED2 = 12;//laranja
const int pino_LED3 = 13;//vermelho
const int pino_LED4 = 6;//azul
const int pino_LED5 = 5;//amarelo
const int pino_LED6 = 4;//branco
const int pino_LED7 = 3;//verde2


//frequencias
const int c = 261; //dó
const int d = 293; //ré
const int e = 329; //mi
const int f = 349; //fá
const int g = 391; //sol
const int a = 440; //lá
const int b = 493; //sí


void setup()
{
//Configurar os Pinos
  pinMode(pino_botao1, INPUT_PULLUP);
  pinMode(pino_botao2, INPUT_PULLUP);
  pinMode(pino_botao3, INPUT_PULLUP);
  pinMode(pino_botao4, INPUT_PULLUP);
  pinMode(pino_botao5, INPUT_PULLUP);
  pinMode(pino_botao6, INPUT_PULLUP);
  pinMode(pino_botao7, INPUT_PULLUP);

  pinMode(pino_buzzer, OUTPUT);
  pinMode(pino_LED1, OUTPUT);
  pinMode(pino_LED2, OUTPUT);
  pinMode(pino_LED3, OUTPUT);
  pinMode(pino_LED4, OUTPUT);
  pinMode(pino_LED5, OUTPUT);
  pinMode(pino_LED6, OUTPUT);
  pinMode(pino_LED7, OUTPUT);

}

void loop()
{
//Salvar cada botao
  bool estado_botao1 = digitalRead(pino_botao1);
  bool estado_botao2 = digitalRead(pino_botao2);
  bool estado_botao3 = digitalRead(pino_botao3);
  bool estado_botao4 = digitalRead(pino_botao4);
  bool estado_botao5 = digitalRead(pino_botao5);
  bool estado_botao6 = digitalRead(pino_botao6);
  bool estado_botao7 = digitalRead(pino_botao7);

  
  if(estado_botao1 == LOW){
  //do
    tone(pino_buzzer, c);
    digitalWrite(pino_LED1, HIGH);
  }
  else if(estado_botao2 == LOW){
  //re
    tone(pino_buzzer, d);
    digitalWrite(pino_LED2, HIGH);
  }
  else if(estado_botao3 == LOW){
  //mi
  	tone(pino_buzzer, e);
    digitalWrite(pino_LED3, HIGH);
  }
  else if(estado_botao4 == LOW){
  //fa
    tone(pino_buzzer, f);
    digitalWrite(pino_LED4, HIGH);
  }
  else if(estado_botao5 == LOW){
  //sol
    tone(pino_buzzer, g);
    digitalWrite(pino_LED5, HIGH);
  }
  else if(estado_botao6 == LOW){
  //la
    tone(pino_buzzer, a);
    digitalWrite(pino_LED6, HIGH);
  }
  else if(estado_botao7 == LOW){
  //si
    tone(pino_buzzer, b);
    digitalWrite(pino_LED7, HIGH);
  }
  else{
  //Desligar Buzzer
    noTone(pino_buzzer);
  	digitalWrite(pino_LED1, LOW);
   	digitalWrite(pino_LED2, LOW);
  	digitalWrite(pino_LED3, LOW);
    digitalWrite(pino_LED4, LOW);
  	digitalWrite(pino_LED5, LOW);
  	digitalWrite(pino_LED6, LOW);
  	digitalWrite(pino_LED7, LOW);

  }
}

//-------------part01-----------------------
/*
//pino on buzzer esta conectado
const int pino_buzzer = 10;

//frequencias
const int c = 261; //dó
const int d = 293; //ré
const int e = 329; //mi
const int f = 349; //fá
const int g = 391; //sol
const int a = 440; //lá
const int b = 493; //sí


void setup()
{
//configura o pino com o buzzer como saida
  pinMode(pino_buzzer, OUTPUT);
}

void loop()
{
//toca a nota dó por 1 segundo
  tone(pino_buzzer, c);
  delay(1000);
  
 //ré
  tone(pino_buzzer, d);
  delay(1000);
  
 //mi
  tone(pino_buzzer, m);
  delay(1000);
  
 //fa
  tone(pino_buzzer, f);
  delay(1000);
  
 //sol
  tone(pino_buzzer, g);
  delay(1000);
  
 //la
  tone(pino_buzzer, a);
  delay(1000);
  
 //si
  tone(pino_buzzer, b);
  delay(1000);
  
//Desliga o Buzzer por 2 segundos
  noTone(pino_buzzer);
  delay(2000);
  
}
*/