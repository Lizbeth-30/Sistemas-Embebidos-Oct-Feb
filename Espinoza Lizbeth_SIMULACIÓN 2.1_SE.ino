/*
 * CAPÍTULO II: PUERTOS DIGITALES
 * CÓDIGO 1: Manejo de puertos configurados como salidas
 * OBJETIVO: Encender y apagar leds mediante el uso de diferentes tipos de variables 
 * No necesita librerias
 * Funciones de programación:
 *              pinMode(pin,MODO)
 *                          MODO -> INPUT/OUTPUT
 *              digitalWrite(pin,ESTADO)
 *                           ESTADO -> HIGH, LOW
 *              delay (ms)
 *                           ms -> tiempo en milisegundos
 */

 // Variables: numéricas enteras (int), decimales (float), caracteres (chart)
#define led1 8        //uso de #define, es una variable que no se puede alterar su valor, no existe una depuración de errores
int led2 = 9;         //se puede considerar como una variable normal
const int led3 = 10;  //variable constante, es la recomendable
 
void setup() {
  pinMode(led1,OUTPUT);  //declaro el pin 8 como salida
  pinMode(led2,OUTPUT);  //declaro el pin 9 como salida
  pinMode(led3,OUTPUT);  //declaro el pin 10 como salida
  
}

void loop() {
  digitalWrite(led1,HIGH);  //Envía 5V al pin 8
  delay(500);               //Se detiene el microcontrolador por medio segundo
  digitalWrite(led1,LOW);   //Envía 0V al pin 8
  delay(500);               //Se detiene el microcontrolador por medio segundo
  digitalWrite(led2,HIGH);  //Envía 5V al pin 9
  digitalWrite(led3,LOW);   //Envía 0V al pin 10
  delay(400);               //Se detiene el microcontrolador por medio segundo
  digitalWrite(led3,HIGH);  //Envía 5V al pin 10
  digitalWrite(led2,LOW);   //Envía 0V al pin 9
  delay(400);               //Se detiene el microcontrolador por medio segundo


}
