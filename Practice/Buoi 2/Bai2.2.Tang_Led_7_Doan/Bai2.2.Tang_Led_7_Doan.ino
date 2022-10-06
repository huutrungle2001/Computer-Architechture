// Đối với Led7 đơn chúng ta sẽ không sử dụng thư viện SevSeg như Led 7 tứ
const int segmentPins[8] = {6, 10, 9, 3, 4, 5, 7, 8};  // quản lý việc hiển thị LED 7 đoạn DP,G-A (dấu chấm)

int buttonPin = 2;  // khai báo chân digital kết nối đến button

int i = 0;

const byte numberal[10] = {
    // Chúng ta sẽ dùng kiểu mảng để khai báo 9 trạng thái của led (0-9) bằng mã nhị phân
    B11111100,  // Quy ước 1 sáng 0 tắt => các vị trí F-A sẽ sáng, G tắt, DP tắt. Led hiển thị số 0
    B01100000,  // tương tự với mã này ta sẽ được số 1
    B11011010,  // 2
    B11110010,  // 3
    B01100110,  // 4
    B10110110,  // 5
    B10111110,  // 6
    B11100000,  // 7
    B11111110,  // 8
    B11100110,  // 9
};
void setup() {  // thiết lập các chức năng chân

    for (int vitri = 0; vitri < 8; vitri++) {
        pinMode(segmentPins[vitri], OUTPUT);
        digitalWrite(segmentPins[vitri], HIGH);
    }

    pinMode(buttonPin, INPUT);  // PinMode để nhận tín hiệu đầu vào từ Button

    attachInterrupt(0, tang, RISING);  // Thêm một Interrupt tại chân digital 2
    // Tham khảo thêm tại http://arduino.vn/reference/attachinterrupt

    Serial.begin(9600);  // Bật Serial ở mức baudrate 9600

    Sodawrite(0);  //Đầu tiên là xuất số 0
}

void loop() {}

void tang() {
    // Chỉ đếm từ 0 --> 9
    i = ++i % 10;  // Xem thêm tại http://arduino.vn/reference/Increment-Decrement
    Sodawrite(i);  // Xuất ra đèn Module LED 7 đoạn
}

void Sodawrite(int number) {
    number = constrain(number, 0, 9);
    Serial.println(number);  // Xuất giá trị hiện tại
    boolean isBitSet;

    for (int segment = 0; segment < 8; segment++) {  // Có 1 byte 8bit nên chạy từ bit 0 --> 7
        isBitSet = bitRead(numberal[number], segment);
        isBitSet = !isBitSet;  // Do chúng ta sử dụng LED 7 đoạn chung cực dương nên phải có dòng này.
        digitalWrite(segmentPins[segment], isBitSet);
    }
}