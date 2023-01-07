 //* ESP8266 
 //* Arduino IDE 2.0.3 [2022]
 //* Sample Coding : PIR Motion Sensor
 
int PIR_IN = D3;  //กำหนดขาของ PIR Sensor
 
void setup() {
  Serial.begin(9600);
  pinMode(PIR_IN, INPUT);  // กำหนด pinMode ให้ PIR_IN เป็น INPUT
 
}
 
void loop() {
  int PIR_Value = digitalRead(PIR_IN);  // รับข้อมูลจาก Digital จาก PIR_IN ไปเก็บไว้ใน PIR_Value
 
  if (PIR_Value == HIGH) {  // ถ้าหาก PIR_Value มีค่าเท่ากับ HIGH หรือ 1
    Serial.println("PIR Motion Sensor : Active [ON]");  // แสดงข้อความออกมาว่า Active ON (มีการเคลื่อนไหว)
   
  } else {
    Serial.println("PIR Motion Sensor : Unactive [OFF]");  // ถ้าไม่ใช่แสดง Unactive [OFF] (ไม่มีการเคลื่อนไหว)
   
  }
 
  delay(100);  // หน่วงเวลา 100 มิลลิวินาที
}