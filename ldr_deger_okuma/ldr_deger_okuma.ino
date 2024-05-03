#define ldr A0
void setup() {
  Serial.begin(9600);
  pinMode(ldr,INPUT);
}

void loop() {
  int ldr_deger=analogRead(ldr);
  Serial.println(ldr_deger);
  

}
