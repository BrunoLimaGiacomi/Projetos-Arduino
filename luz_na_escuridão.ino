int ledPin = 13;        /
int ldrPin = A0;        
int lightThreshold = 500; 

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(ldrPin);
  Serial.print("Light Sensor Value: ");
  Serial.println(lightValue);

  if (lightValue < lightThreshold) 
  {
    digitalWrite(ledPin, HIGH); // Turn on the LED
    Serial.println("It's dark, LED is ON");
  } else 
  {
    digitalWrite(ledPin, LOW);  // Turn off the LED
    Serial.println("It's light, LED is OFF");
  }

  delay(1000);
}
