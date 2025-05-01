//Et sensor oleks alguses 0
int sensorValue = 0;

void setup() {
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(A0);
  //Kui on Pime
   if (sensorValue < 512) {
    Serial.println("Pime");
    analogWrite(9, 255);
  //Kui on Valge
  } else {
    Serial.println("Valge");
    analogWrite(9, 0);
  }
  delay(100);
}

//Abi sain: https://www.tinkercad.com/projects/Light-Sensor-Photoresistor-Arduino-Tinkercad
