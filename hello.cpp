#include <Arduino.h>
#include <WiFi.h>
#include <Firebase_ESP_Client.h>

// WiFi credentials
#define WIFI_SSID "Saicharan"
#define WIFI_PASSWORD "saicharan@123"

// Firebase credentials
#define API_KEY "Z6ego4M1YJAUh543bdRxkjalfZ7wb39ibO3NDpW5"
#define DATABASE_URL "iot-esp32-52d33-default-rtdb.asia-southeast1.firebasedatabase.app"

// Firebase objects
FirebaseData fbdo;
FirebaseAuth auth;
FirebaseConfig config;

// Onboard LED is usually GPIO 2
const int onboardLedPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(onboardLedPin, OUTPUT);

  // Connect to WiFi
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println("\nConnected to WiFi!");

  // Configure Firebase
  config.api_key = API_KEY;
  config.database_url = DATABASE_URL;
  config.signer.test_mode = true;
  config.time_zone = 5.5;

  Firebase.begin(&config, &auth);
  Firebase.reconnectWiFi(true);

  Serial.println("Waiting for Firebase ready...");
  while (!Firebase.ready()) {
    Serial.println("Firebase not ready...");
    delay(1000);
  }
  Serial.println("Firebase is ready!");
}

void loop() {
  // Check LED value from Firebase
  if (Firebase.RTDB.getInt(&fbdo, "/LED")) {
    int ledState = fbdo.intData();
    digitalWrite(onboardLedPin, ledState);
    Serial.print("LED state received: ");
    Serial.println(ledState);
  } else {
    Serial.print("Failed to get LED state: ");
    Serial.println(fbdo.errorReason());
  }

  delay(1000);
}
