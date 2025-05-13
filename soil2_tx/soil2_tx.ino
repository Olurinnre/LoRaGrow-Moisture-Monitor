#include <SPI.h>
#include <LoRa.h>
int soilpin = A0;
int soilVal;
float Humiditytwo;
int dv = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(soilpin, INPUT);
   
  while (!Serial);
  Serial.println("LoRa Sender");
  if (!LoRa.begin(433E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}

void loop() {
  soilVal = analogRead(soilpin);
  Humiditytwo = ((-(100./170.))*(soilVal - 915));
  Serial.println(soilVal);
  Serial.println(Humiditytwo);
  LoRa.beginPacket();
  LoRa.print(Humiditytwo);
  LoRa.endPacket();
  delay(dv);
  
}
