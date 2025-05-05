//Measuring_Temperature_Using_LM35_Sensor

int sensorPin=A0;
float voltage,temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue=analogRead(sensorPin);
  voltage=sensorValue*(5.0/1023.0);
  temperature=voltage*100;
  Serial.println(temperature);
  delay(1000);
}
