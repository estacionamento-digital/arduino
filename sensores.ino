void lerSensores(){
  if(digitalRead(sensorSaida) == false){
  Serial.println("Saida");
  Serial.println(digitalRead(sensorSaida));
 liberarSaida();
 
}else{
  Serial.println("Nenhum carro na saida");
  Serial.println(digitalRead(sensorSaida));
}
 if(digitalRead(sensorEntrada) == false){
  Serial.println("Entrada");
  liberarEntrada();
  
}else{
  Serial.println("Nenhum carro na entrada");
}

 }
