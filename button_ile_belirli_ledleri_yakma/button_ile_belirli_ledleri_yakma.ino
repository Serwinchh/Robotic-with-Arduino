#define green 3
#define yellow 4
#define blue 5
#define red 6
#define button 2
int counter=0;
void setup() {
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  if(digitalRead(button)==HIGH){
    counter++;
  }
  if(counter==1){
    digitalWrite(red,1);
    digitalWrite(blue,0);
    digitalWrite(green,0);
    digitalWrite(yellow,0);
  }else if(counter==2){
    digitalWrite(red,0);
    digitalWrite(blue,1);
    digitalWrite(green,0);
    digitalWrite(yellow,0);
  }else if(counter==3){
    digitalWrite(red,0);
    digitalWrite(blue,0);
    digitalWrite(green,1);
    digitalWrite(yellow,0);
  }else if(counter==4){
    digitalWrite(red,0);
    digitalWrite(blue,0);
    digitalWrite(green,0);
    digitalWrite(yellow,1);
  }
  if(counter==5){
    counter=0;
  }
  delay(100);


}
