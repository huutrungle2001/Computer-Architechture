const int buttonPin1 = 2;  // pin nối button để điều khiển
const int ledPin2 = 8;     // pin nối LED điều khiển bằng button
const int ledPin1 = 10;    // pin nối LED bật tắt tự động sau 3s

// Tạo một biến nhận diện trạng thái button:
int buttonState = 0;

void setup() {
    // set ledPin là output
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    // set buttonPin là input để đọc giá trị từ button
    pinMode(buttonPin, INPUT);
}

void loop() {
    if (digitalRead(ledPin1) == LOW) {  // nếu led đang tắt
        digitalWrite(ledPin1, HIGH);    // bật led
    } else {
        digitalWrite(ledPin1, LOW);  // tắt led
    }

    delay(3000);  // dừng chương trình 3s để duy trì trạng thái của led 1

    // đọc giá trị button rồi lưu vào buttonState
    buttonState = digitalRead(buttonPin);

    // nếu button được nhấn, buttonState nhận giá trị HIGH, và ngược lại
    if (buttonState == HIGH) {
        // Bật LED:
        digitalWrite(ledPin2, HIGH);
    } else {
        // Tắt LED:
        digitalWrite(ledPin2, LOW);
    }
}
