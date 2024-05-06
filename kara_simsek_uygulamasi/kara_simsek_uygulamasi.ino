int LedDizisi[]={2,3,4,5,6,7};
void setup() {
  for(int i=0;i<=5;i++){
    pinMode(LedDizisi[i],OUTPUT);
  }
}

void loop() {
  for(int i=0;i<5;i++){
    digitalWrite(LedDizisi[i],HIGH);
    delay(100);
    digitalWrite(LedDizisi[i],LOW);
  }
  for(int j=5;j>=0;j--){
    digitalWrite(LedDizisi[j],HIGH);
    delay(100);
    digitalWrite(LedDizisi[j],LOW);
  }

}
