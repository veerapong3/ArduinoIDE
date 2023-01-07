 //* ESP8266 
 //* Arduino IDE 2.0.3 [2022]
 //* Sample Coding : PIR Motion Sensor
 //*Code by V.Tak

int PIR_PIN = D6;
int Relay_PIN = D7;
int pirState = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("V.Tak Coding");
  pinMode(PIR_PIN, INPUT);
  pinMode(Relay_PIN, OUTPUT);

}

void loop() {
  pirState = digitalRead(PIR_PIN); //เก็บตัวแปรที่อ่านค่าได้ไว้ที่ pirState

  Serial.print("PIR_Status : "); Serial.println(pirState); //แสดงข้อความ และค่าที่อ่านได้จาก pirState

  if (pirState == HIGH) {
    digitalWrite(Relay_PIN, LOW);
    delay(120000); //เมื่อสถานะมีการเคลื่อนไหว หน่วงเวลาตรวจสอบ 2 นาที ก่อนตรวจอีกครั้ง
  }

  else if (pirState == LOW) {
    digitalWrite(Relay_PIN, HIGH);
  }
}