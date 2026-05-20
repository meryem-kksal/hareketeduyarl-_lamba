void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);    // sensörün out bacağı giriş
  pinMode(13, OUTPUT);  // ışığın çıkış
  Serial.begin(9600);
  
  Serial.println("sistem baslatiliyor... sensorun isinmasi icin 30 saniye hareket etme.");
}

void loop() {
  int hareketVarMi = digitalRead(2); // pin 2yi oku

  if (hareketVarMi == HIGH) {
    // Hareket algılandı!
    digitalWrite(13, HIGH); // ışığı yak
    Serial.println("DİKKAT: Hareket algılandı! Işık yandı.");
  } 
  else {
    // Hareket yok
    digitalWrite(13, LOW);  // ışığı söndür
  }

  delay(100); // işlemciyi yormayalım
  
}
