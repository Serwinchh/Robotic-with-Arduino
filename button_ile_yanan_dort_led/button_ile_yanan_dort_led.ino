// Ledlerin ve Butonu bağlı olduğu pinleri tanımladık
#define red 3
#define blue 4
#define yellow 5
#define green 6
#define button 7

void setup() {
  // Pinlerin çıkış mı giriş mi olacağını tanımladık
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  // Butona basılırsa ledleri yaktık
  if(digitalRead(button)==HIGH){
    digitalWrite(red,HIGH);
    digitalWrite(blue,HIGH);
    digitalWrite(yellow,HIGH);
    digitalWrite(green,HIGH);
  }else{ // Butona basılmazsa ledleri söndürdük
    digitalWrite(red,LOW);
    digitalWrite(blue,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(green,LOW);
  }
  delay(20); 
  

}
