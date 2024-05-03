#define ldr A0
#define led 3
void setup() {
  
  pinMode(ldr,INPUT);
  pinMode(led,OUTPUT);
  

}

void loop() {
  if(analogRead(ldr)<=700){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
  delay(100);
  

}
