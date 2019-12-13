#include <ESP8266WiFi.h> //Incluindo a biblioteca wifi

//Variáveis com o nome da rede e senha
char ssid [] = "BRUNO";
char senha[] = "11235813";


//Aqui vamos criar uma função que irá efetuar a conexão na rede wifi
void conectarWiFi(char SSID[], char SENHA[]){

  Serial.print("Conectando a rede");
  Serial.println(SSID);

  WiFi.begin(SSID, SENHA); //Inicia a conexão WiFi

/*Enquanto o WiFi não conecta ele fica printando um
ponto a cada 0,5s*/
  while(WiFi.status () != WL_CONNECTED){
    delay(500);
    Serial.print(".");
    }
   /*Quando conectar - vai apresentar
   a mensagem e o IP*/
  Serial.println(" ");
  Serial.println("WiFi Conectado");
  Serial.println("Endereço de IP: ");
  Serial.println(WiFi.localIP());
  }

void setup() {

   Serial.begin(115200);
  //Chama a função dentro do SETUP
  conectarWiFi(ssid, senha);

}

void loop() {
  // put your main code here, to run repeatedly:

}
