void liberarEntrada(){
  digitalWrite(vermelhoEntrada, true);
  
  while(digitalRead(sensorEntrada) == false){
    char abrir = Serial.read();
      Serial.println("Lendo a placa");
      delay(300);
      Serial.println("Gerando QRcode entrada");
      delay(300);
    if(abrir == '1'){
      digitalWrite(vermelhoEntrada, false);
      digitalWrite(verdeEntrada, true);
      Serial.println("Entrada liberada");   
      delay(3000);
      digitalWrite(verdeEntrada, false);
     }
  }
  digitalWrite(vermelhoEntrada, false);
}
void liberarSaida(){
  digitalWrite(vermelhoSaida, true);
  
  while(digitalRead(sensorSaida) == false){
    char abrir = Serial.read();
      
      Serial.println("Lendo QrCode saída");
      delay(300);
    if(abrir == '1'){
      digitalWrite(vermelhoSaida, false);
      digitalWrite(verdeSaida, true);
      Serial.println("Saída liberada");   
      delay(3000);
      digitalWrite(verdeSaida, false);
     }
}
digitalWrite(vermelhoSaida, false);
}
