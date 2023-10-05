
int redPin = 3;
int bright = 255;
int off = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, bright);
  delay(1000);
  analogWrite(redPin, off);
  delay(500);
  analogWrite(redPin, 200);
  delay(1000);
  analogWrite(redPin, off);
  delay(500);
    analogWrite(redPin, 125);
  delay(1000);
  analogWrite(redPin, off);
  delay(500);
    analogWrite(redPin, 50);
  delay(1000);
  analogWrite(redPin, off);
  delay(500);

}
