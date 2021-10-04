void setup() {
  /* semua program di void setup hanya akan di jalankan sekai saja */
  Serial.begin(9600);
  Serial.println("Welcome to IDN Boarding School");

}

void loop() {
  /* Semua program ada di void() akan di jalankan bercail-kali secara berkala */
  Serial.println("Welcome to IDN");
  delay(1000);
}
