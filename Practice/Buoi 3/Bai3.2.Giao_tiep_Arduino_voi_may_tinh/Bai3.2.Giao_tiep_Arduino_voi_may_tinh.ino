void setup() {
    Serial.begin(9600);
    pinMode(8, OUTPUT);
    digitalWrite(8, LOW);  // lúc đầu ta để LED tắt
}

void loop() {
    if (Serial.available()) {                 // nếu có dữ liệu gửi đến
        String text = Serial.readStringUntil('\n');  // đọc giá trị gửi đến cho đến khi gặp kí tự xuống dòng \n

        if (text == "ON") {
            digitalWrite(8, HIGH);               // bật LED
            Serial.println("LED is turned ON");  // gửi lại thông báo lên Serial Monitor
        }

        if (text == "OFF") {
            digitalWrite(8, LOW);  // tắt LED
            Serial.println("LED is turned OFF");
        }
    }
}
