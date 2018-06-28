/*
 * montar um semaforo
 * 
 * ligar o pino 1 na resistencia
 * conectar a resistencia em um led usando a perna maior do led
 * conectar a perna menor do led no terra
 */
void setup() {
 pinMode(1,OUTPUT);
}
 
void loop() {
  digitalWrite(1,HIGH);
  delay(1000);
  digitalWrite(1,LOW);
  delay(1000);
}
