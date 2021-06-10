// digital pin 2 has a pushbutton attached to it. Give it a name:
// wajib ada pullup resistor (1k atau 10k) antara input dan 3.3v
int pushButton = D2;
int buttonState = 0;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(74880);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  Serial.println("5. TACTILE SWITCH INPUT");  
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  buttonState = digitalRead(pushButton);
  if (buttonState == LOW) {
    Serial.println("Button is pressed");  
    delay(50);
  }
  delay(1);        // delay in between reads for stability
}
