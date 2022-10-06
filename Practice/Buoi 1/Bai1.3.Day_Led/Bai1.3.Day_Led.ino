//Lê Hữu Trung
void setup() {
  // khởi tạo các chân 2, 3, 4, 5, 6 là OUTPUT
  // nghĩa là ta sẽ sử dụng những chân này với nhiệm vụ xuất tín hiệu điện
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
void loop() {
  
  digitalWrite(2, HIGH); //bật đèn led nối với chân digital 2
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
