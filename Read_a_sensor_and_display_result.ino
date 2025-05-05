//Read_a_sensor_and_display_result

int sensorPin=A0;
float voltage;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue=analogRead(sensorPin);
  voltage=sensorValue*(5.0/1023.0);
  Serial.println(voltage);
  delay(1000);
}
