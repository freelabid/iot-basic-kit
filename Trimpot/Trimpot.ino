int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

float trimpotVoltage = 0.0;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(74880);
  Serial.println("4. ANALOG TRIMPOT");  
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  trimpotVoltage = (float) sensorValue / 256;
  Serial.print("Nilai trimpot: ");
  Serial.print(sensorValue);
  Serial.print(", tegangannya: ");
  Serial.println(trimpotVoltage, 3);
  if (sensorValue > 512) {
    digitalWrite(LED_BUILTIN,LOW); 
  } else {
    digitalWrite(LED_BUILTIN,HIGH);   
  }
  // stop the program for for <sensorValue> milliseconds:
  delay(500);
}
