int red = 6;
int green = 9;
int blue = 10;
int bright = 255;
int delayTime = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void rgb_color(int bright, int timeDelay){
  analogWrite(red, bright);
  analogWrite(green, 0);
  analogWrite(blue, 0);
  delay(timeDelay);

  analogWrite(red, 0);
  analogWrite(green, bright);
  analogWrite(blue, 0);
  delay(timeDelay);

  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, bright);
  delay(timeDelay);
}

void loop() {
  // put your main code here, to run repeatedly:
  rgb_color(bright, delayTime);
}
