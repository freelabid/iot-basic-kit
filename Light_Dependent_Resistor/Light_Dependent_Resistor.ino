int sensorPin = A0;    // select the input pin for the LDR
int sensorValue = 0;  // variable to store the value coming from the sensor

float trimpotVoltage = 0.0;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(74880);
  Serial.println("3. ANALOG LDR");  
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  trimpotVoltage = (float) sensorValue / 256;
  Serial.print("Nilai trimpot: ");
  Serial.println(sensorValue);
  if (sensorValue < 200) {
    digitalWrite(LED_BUILTIN,LOW); 
  } else {
    digitalWrite(LED_BUILTIN,HIGH);   
  }
  // stop the program for for <sensorValue> milliseconds:
  delay(500);
}
