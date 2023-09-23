#include <WiFi.h>; 
#include <DHT.h>; 
#include <AWS_IOT.h>; 
#define DHT_PIN 23 // pin connected to data pin of DHT11 
#define DHT_TYPE DHT11 // Type of the DHT Sensor, DHT11/DHT22 
#define WIFI_SSID "xxxxxxxxx" // SSID of your WIFI 
#define WIFI_PASSWD "xxxxxxxx" //your wifi password 
#define CLIENT_ID "Weather_monitor"// thing unique ID, this id should be unique among all things associated with your AWS account. 
#define MQTT_TOPIC "$aws/things/Weather_monitor/shadow/name/update" //topic for the MQTT data 
#define AWS_HOST "xxxxxxxxxxxxxxxxxxxxxxx.amazonaws.com" // your host for uploading data to AWS
#define Mod_L 32
#define Low_L 33
#define High_L 35
DHT dht(DHT_PIN, DHT_TYPE);
AWS_IOT aws;
void setup(){
  Serial.begin(9600);
  Serial.print("\nInitializing thing Temp_Humidity_DHT11_0 \n");
  Serial.print("\n  Initializing WIFI: Connecting to ");
  Serial.println(WIFI_SSID);
  WiFi.begin(WIFI_SSID, WIFI_PASSWD);
  Serial.print("  ");
  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(500);
  }
  Serial.println("\n  Connected.\n  Done");
  Serial.print("\n  Initializing DHT11...");
  dht.begin();
  Serial.println("  Done.");
  Serial.println("\n  Initializing connetction to AWS....");
  if(aws.connect(AWS_HOST, CLIENT_ID) == 0){ // connects to host and returns 0 upon success
    Serial.println("  Connected to AWS\n  Done.");
  }
  else {
    Serial.println("  Connection failed!\n make sure your subscription to MQTT in the test page");
  }
  Serial.println("  Done.\n\nDone.\n");

  pinMode(Mod_L,OUTPUT);
  pinMode(Low_L,OUTPUT);
  pinMode(High_L,OUTPUT);

}
void loop(){
  // read temperature and humidity
  float temp = dht.readTemperature(); // return temperature in °C
  float humidity = dht.readHumidity();// return humidity in %
 

 

   // check whether reading was successful or not
  if(temp == NAN || humidity == NAN){ // NAN means no available data
    Serial.println("Reading failed.");
  }
  else{
    //create string payload for publishing
    String temp_humidity = "Temperature: ";
    temp_humidity += String(temp);
    temp_humidity += "°C Humidity: ";
    temp_humidity += String(humidity);
    temp_humidity += " %";

     //indicator
  if(temp>=24.30||temp<25.00)
  {
    digitalWrite(Mod_L,HIGH);
     digitalWrite(High_L,LOW);
     digitalWrite(Low_L,LOW);
  }

   else  if(temp<24.30)
  {
    digitalWrite(Low_L,HIGH);
     digitalWrite(Mod_L,LOW);
     digitalWrite(High_L,LOW);
  }
  
  else if(temp>=25.00)
  {
    digitalWrite(High_L,HIGH);
    digitalWrite(Low_L,LOW);
     digitalWrite(Mod_L,LOW);
  }
   
    char payload[40];
    temp_humidity.toCharArray(payload, 40);
    Serial.println("Publishing:- ");
    Serial.println(payload);
     if(aws.publish(MQTT_TOPIC, payload) == 0){// publishes payload and returns 0 upon success
      Serial.println("Success\n");
    }
    else{
      Serial.println("Failed!\n");
    }
  }
  delay(1000);
}