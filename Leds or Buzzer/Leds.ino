int ledGreen = D4;
int ledRed = D3;
int ledYellow = D2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYellow, HIGH);  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledGreen, LOW);
  delay(1000);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, LOW);
  delay(1000);
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledRed, LOW);
  delay(1000);
  digitalWrite(ledRed, HIGH);  
}
