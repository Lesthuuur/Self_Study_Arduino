const int red = 8;
const int green = 9;
const int yellow = 10;




void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);

}

void redBlink(){
  for(int i = 0; i < 5; i++){
    digitalWrite(red, HIGH);
    delay(600);
    digitalWrite(red, LOW);
    delay(600);
  }

}

void greenBlink(){
  for(int i = 0; i < 10; i++){
    digitalWrite(green, HIGH);
    delay(400);
    digitalWrite(green, LOW);
    delay(400);
  }
}

void yellowBlink(){
  for(int i = 0; i < 15; i++){
    digitalWrite(yellow, HIGH);
    delay(200);
    digitalWrite(yellow, LOW);
    delay(200);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
 redBlink();
 greenBlink();
 yellowBlink();
}
