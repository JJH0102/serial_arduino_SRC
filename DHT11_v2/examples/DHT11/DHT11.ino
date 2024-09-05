// Modified by John 2015 11 03
// MIT license

#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
}
void loop() {
  delay(2000);
  int h = dht.readHumidity();
  int t = dht.readTemperature();
  Serial.print("humi");           // 전송 --> humi56
  Serial.println(h);
  Serial.print("temp");           // 전송 --> temp24
  Serial.println(t);
}
