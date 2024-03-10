#include <RoboCognifront.h>
char ssid[]="akconnect";
char pass[]="Ramnagarnashik";

void setup() {
  // put your setup code here, to run once:
  WiFi.begin(ssid,pass);
  RoboInit();
  Serial.print("IP Address:");
  Serial.println(WiFi.localIP());
  
  }

void loop() {
  // put your main code here, to run repeatedly:
  RoboOTA();

}
