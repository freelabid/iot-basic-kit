int inputPin = D2;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;                    // variable for reading the pin status
 
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
 
  Serial.begin(74880);
  Serial.println("1. MOTION SENSOR");
}
 
void loop(){
  val = digitalRead(inputPin);  // read input value
  
  if (val == HIGH)  // check if the input is HIGH
  {            
    digitalWrite(LED_BUILTIN, HIGH);  // turn LED ON
  
    if (pirState == LOW) // jika sebelumnya memang tidak ada motion, 
    {
      Serial.println("Motion detected! "); // print on output change
      pirState = HIGH; // supaya berikutnya tidak ngeprint lagi
    }
  } 
  else 
  {
    digitalWrite(LED_BUILTIN, LOW); // turn LED OFF
  
    if (pirState == HIGH)
  {
      Serial.println("Motion ended! ");  // print on output change
      pirState = LOW;
    }
  }
}
