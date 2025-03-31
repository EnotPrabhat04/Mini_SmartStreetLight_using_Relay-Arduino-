 int LDRpin=8;
 int x;
 int relayPin=13;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LDRpin,INPUT);
  pinMode(relayPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  x=digitalRead(LDRpin);
  Serial.println(x);
  if(x==1){
    digitalWrite(relayPin,HIGH);
    delay(300);
  }
  if(x==0){
    digitalWrite(relayPin,LOW);
  }

}
