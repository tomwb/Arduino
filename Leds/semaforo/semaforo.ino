/*
 * montar um semaforo
 * 
 * ligar cada pino (1,2 e 3) nas resistencias
 * conectar cada resistencia em um led usando a perna maior do led
 * conectar a perna menor do led no terra
 */
void setup() {
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}
 
void loop() {
  digitalWrite(1,HIGH);
  delay(1000);
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
}
