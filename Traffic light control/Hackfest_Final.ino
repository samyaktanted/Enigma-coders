#include<ESP8266WiFi.h>
#include<FirebaseArduino.h>

int A1=16,A2=5,A3=4,A4=0;

#define FIREBASE_HOST "trafficcontroller-93acd.firebaseio.com"
#define FIREBASE_AUTH "33z02ZH2yDLuYxCTrt9rTOLsyBRd2XqLAsv36lYb"

#define ssid "HACKFEST"
#define password "hackfest@2018"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("");
  Serial.println("");
  Serial.println("connectin to  ");
    Serial.println(ssid);
  WiFi.begin(ssid,password);
  while(WiFi.status()!=WL_CONNECTED)
  {
    Serial.println("*");
    delay(500);
  }

  Serial.println("Wifi Connected ");

    Serial.println("Connect to ");
      Serial.println("http://");
        Serial.println(WiFi.localIP());
      Serial.println("/");
  
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.setInt("traffic_status",0);
}

void loop() {
  // put your main code here, to run repeatedly:

  int status=Firebase.getInt("traffic_status");
  if(status==11)
    digitalWrite(A1, 1);
  else
    digitalWrite(A1, 0);
  if(status==12)
    digitalWrite(A2, 1);
  else
    digitalWrite(A2,0);
  if(status==13)
    digitalWrite(A3,1);
  else
    digitalWrite(A3, 0);
  if(status==14)
    digitalWrite(A4,1);
  else
    digitalWrite(A4, 0);  

  if
  
 if (Firebase.failed()){ // Check for errors 
     Serial.print("setting /number failed:");
     Serial.println(Firebase.error());
     return;
    }
  delay(10);
}

