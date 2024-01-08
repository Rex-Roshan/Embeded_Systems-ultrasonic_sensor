int distance=0;
int duration=0;
const int tp=5;
const int ep=8;

void setup() {
  // put your setup code here, to run once:
   pinMode(tp,OUTPUT);
   pinMode(ep,INPUT);
   Serial.begin(9600);
   pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(tp,LOW);
  delayMicroseconds(2);
  digitalWrite(tp,HIGH);
  delayMicroseconds(10);
  duration=pulseIn(ep,HIGH);
  distance=duration*.034/2;
  Serial.println("Distance :");
  Serial.print(distance,DEC);
  if(distance > 0){
    digitalWrite(12,HIGH);
    //delay(1000);
    //digitalWrite(12,LOW);
    //delay(10);
  }
  else{
    digitalWrite(12,LOW);
  }

}
