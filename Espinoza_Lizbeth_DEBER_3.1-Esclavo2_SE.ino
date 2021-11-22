
///////////////////////ESCLAVO 2//////////////////////
#include <Wire.h>               //libreria I2C
char dato;                      //variable de almacenamiento de dato
const int led1=8;               //led1 en pin8
const int led2=9;               //led2 en pin9
const int led3=10;              //led3 en pin10
const int led4=11;              //led4 en pin 11

void setup() {
  Wire.begin(3);                //id de esclavo
  Wire.onReceive(receiveEvent); //evento de rececpcion
  Serial.begin(9600);           //comunicación serial
  pinMode(led1,OUTPUT);         //pin8 como salida
  pinMode(led2,OUTPUT);         //pin9 como salida
  pinMode(led3,OUTPUT);         //pin10 como salida
  pinMode(led4,OUTPUT);         //pin11 como salida
}

void loop() {
  delay(100);
}

void receiveEvent (int bytes){
  while(Wire.available()){
    dato=Wire.read();
    if(dato=='B') {
      digitalWrite(led4,HIGH);  //Enciende el led4
      delay(5000);
      digitalWrite(led3,HIGH);  //Enciende el led3
      delay(5000);
      digitalWrite(led2,HIGH);  //Enciende el led2
      delay(5000);
      digitalWrite(led1,HIGH);  //Enciende el led1
      delay(5000);
      digitalWrite(led4,LOW);  //Apaga el led4
      digitalWrite(led3,LOW);  //Apaga el led3
      digitalWrite(led2,LOW);  //Apaga el led2
      digitalWrite(led1,LOW);  //Apaga el led1
      delay(5000);   
    }
  }
}
