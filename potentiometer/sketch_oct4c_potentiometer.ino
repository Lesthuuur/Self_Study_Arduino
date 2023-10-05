int voltPin = A2;
int valFromPot;
float V2;
int led = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(voltPin, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  valFromPot=analogRead(voltPin);
  V2 = (5./1023.) * valFromPot;

  Serial.println(V2);


  if (V2 > 4.0){
    analogWrite(led, 255);
  }
  if (V2 < 4.0 && V2 > 3.0){
    analogWrite(led, 150);
  }
  if (V2 < 3.0 && V2 > 2.0){
    analogWrite(led, 100);
  }

  if (V2 < 2.0 && V2 > 1.0){
    analogWrite(led, 50);
  }
  if (V2 < 1.0){
    analogWrite(led, 0);
  }

  delay(300);
}
