int gasSensorPin = A0;  
int gasThreshold = 300; 

void setup() {
  Serial.begin(9600);
  pinMode(gasSensorPin, INPUT);
}

void loop() 
{
  int gasValue = analogRead(gasSensorPin);
  Serial.print("Gas Sensor Value: ");
  Serial.println(gasValue);

  if (gasValue > gasThreshold) 
  {
    Serial.println("Gas detected!");
  }

  delay(1000);
}
