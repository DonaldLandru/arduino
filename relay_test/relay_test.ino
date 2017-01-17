// define global pins
int relay_1 = 12;
int relay_2 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(relay_1,OUTPUT);
  pinMode(relay_2,OUTPUT);
  digitalWrite(relay_1,HIGH);
  digitalWrite(relay_2,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkLights();
  //delay(15000);

}

void blinkLights() {
 // delay(5000);
  digitalWrite(relay_2,LOW);
  //digitalWrite(relay_1,HIGH);
}

