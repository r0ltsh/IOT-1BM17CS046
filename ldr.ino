int sensorPin = A0; // select the input pin for LDR
int ledPin=2;
int sensorValue = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin); // read the value from the sensor
  if (sensorValue <=300) {

digitalWrite(ledPin, HIGH);

Serial.println("LDR is DARK, LED is ON");

}

else {

digitalWrite(ledPin, LOW);

Serial.println("---------------");

}
Serial.println(sensorValue); //prints the values coming from the sensor on the screen

delay(100);

}
