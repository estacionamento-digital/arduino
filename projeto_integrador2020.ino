

//Definir pinos da entrada 

#define vermelhoEntrada 5
#define verdeEntrada 6
#define sensorEntrada 2
int carroEntrada = 0;
int estadoBotaoEntrada;

//Definir pinos da entrada 02
#define verdeSaida 8
#define vermelhoSaida 12
#define sensorSaida 13
int carroSaida = 0;
int estadoBotaoSaida;


void setup() {

 Serial.begin(9600);
 pinMode(vermelhoEntrada, OUTPUT);
 pinMode(vermelhoSaida, OUTPUT);
 pinMode(verdeEntrada, OUTPUT);
 pinMode(verdeSaida, OUTPUT);
 pinMode(sensorEntrada, INPUT_PULLUP);
 pinMode(sensorSaida, INPUT_PULLUP);
 carroEntrada = digitalRead(sensorEntrada);
 carroSaida = digitalRead(sensorSaida);
 
 Serial.begin(9600);
}

void loop() {

lerSensores();

}
