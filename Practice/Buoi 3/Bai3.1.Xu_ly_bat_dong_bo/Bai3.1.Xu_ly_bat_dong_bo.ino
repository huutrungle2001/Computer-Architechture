const int buttonPin = 2;     // pin nối button để điều khiển
const int ledPin2 =  8;      // pin nối LED điều khiển bằng button
const int ledPin1 =  10;      // pin nối LED bật tắt tự động sau 3s

// Tạo một biến nhận diện trạng thái button:
int buttonState = 0;         
// Tạo một biến nhận thời gian làm mốc
unsigned long oldtime = 0;

void setup() {
  // set ledPin là output
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  // set buttonPin là input để đọc giá trị từ button
  pinMode(buttonPin, INPUT);
}

void loop() {

  if ((unsigned long) (millis() - oldtime) > 1000) { // sau 3s thì điều kiện thỏa mãn
      if (digitalRead(ledPin1) == LOW) {  // nếu led đang tắt
        digitalWrite(ledPin1, HIGH); //bật led
      } else {
        digitalWrite(ledPin1, LOW); // tắt led
      }
      oldtime = millis();    // thời gian làm mốc sẽ bằng thời gian hiện tại
  }
  
  
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
