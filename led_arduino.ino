int cancela = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
    cancela = Serial.read();
  }

  if(cancela == '1'){
    digitalWrite(LED_BUILTIN, HIGH);
  } else if (cancela == '0') {
    digitalWrite(LED_BUILTIN, LOW);  
  }
}
