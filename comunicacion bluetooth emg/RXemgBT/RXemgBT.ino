#include <SoftwareSerial.h>

int valor1;
int valor2;
int valor3;

void setup() {
  Serial.begin(9600);  // Initialize the main serial port at 9600 baud
}

void loop() {
  if (Serial.available()) {
    String data = Serial.readStringUntil('\n');  // Read the string until a newline character
    sscanf(data.c_str(), "%d,%d", &valor1, &valor2);  // Convert the string to three integers

   // Serial.print("valor1: ");
    Serial.println(valor1);
    //Serial.print(", valor2: ");
    //Serial.println(valor2);
    delay(1);
  }
}

