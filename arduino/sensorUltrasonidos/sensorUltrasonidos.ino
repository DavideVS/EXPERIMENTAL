//Sensor de Ultrasonidos
int trig = 3;
int echo = 2;
int duration;
int distance;

void setup() {
//Sensor de Ultrasonidos
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);

//serial
Serial.begin(9600);
}

void loop() {

  digitalWrite(trig, HIGH);
  //delay(1);
  digitalWrite (trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration;
  /*
  if(distance > 0 && distance < 50) {
    Serial.println(distance);
    delay(50);
    }*/
  Serial.println(distance);
  delay(100);
}
