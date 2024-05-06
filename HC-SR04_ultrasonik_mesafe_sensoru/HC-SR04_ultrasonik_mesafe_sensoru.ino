#define trig 3
#define echo 4
long sure,uzaklik;
void setup() {
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
   delayMicroseconds(10);
  digitalWrite(trig,LOW);
 
  sure=pulseIn(echo,HIGH);
  uzaklik=(sure/2)/29.154;
  Serial.println(uzaklik);


  

}
