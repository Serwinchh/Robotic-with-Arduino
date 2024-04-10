// Ledlerin pin tanımlamaları
#define blue 3
#define red 4
#define white 5
#define yellow 6

void setup() {
  // Pinleri çıkış olarak ayarladık
  pinMode(blue,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(white,OUTPUT);
  pinMode(yellow,OUTPUT);
}

void loop() {
  // Ledlerin bağlı olduğu pinlere 5V verdik. Yani ledleri yaktık.
  digitalWrite(blue,1);
  digitalWrite(red,1);
  digitalWrite(white,1);
  digitalWrite(yellow,1);
  delay(1000); // Görüntünün belirgin olması için 1 saniyelik bekleme süresi tanımladık
  // Ledlerin bağlı olduğu pinlere 0V yolladık. Yani ledleri söndürdük
  digitalWrite(blue,0);
  digitalWrite(red,0);
  digitalWrite(white,0);
  digitalWrite(yellow,0);
  delay(1000); // Görüntünün belirgin olması için 1 saniyelik bekleme süresi tanımladık
}
