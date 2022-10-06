//hàm setup() chỉ chạy duy nhất một lần khi khởi động arduino hoặc sau khi bạn nhấn nút reset
// http://arduino.vn/reference/setup-va-loop
void setup() {
  // khởi tạo các chân 2, 3, 4, 5, 6 là OUTPUT
  // nghĩa là ta sẽ sử dụng những chân này với nhiệm vụ xuất tín hiệu điện
  // bạn tham khảo tại trang http://arduino.vn/reference/pinmode
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
// sau khi chạy hàm setup(), arduino sẽ chạy hàm loop() liên tục lặp đi lặp lại không bao giờ nghỉ
// http://arduino.vn/reference/setup-va-loop
void loop() {
  
  //Nếu bạn chưa biết hàm digitalWrite có ý nghĩa gì, xin tham khảo tại http://arduino.vn/reference/digitalwrite  
  digitalWrite(2, HIGH); //bật đèn led nối với chân digital 2
  //Nếu bạn chưa biết hàm delay có ý nghĩa gì, xin tham khảo tại http://arduino.vn/reference/delay
  delay(60); // đợi 60 mili giây = 0.06 giây
  digitalWrite(2, LOW); //tắt đèn led nối với chân digital 2
  digitalWrite(3, HIGH); //bật...digital 3
  delay(60);// dừng 60 ms
  digitalWrite(3, LOW); // tắt ... digital 3
  digitalWrite(4, HIGH); //....
  delay(60);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(60);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(60);
  digitalWrite(6, LOW);
  // reverse
  digitalWrite(6, HIGH);
  delay(60);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(60);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  delay(60);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(60);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(60);
  digitalWrite(2, LOW);
}
