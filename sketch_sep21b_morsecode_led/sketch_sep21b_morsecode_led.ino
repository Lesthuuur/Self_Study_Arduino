const int red = 8;
const int green = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

// void morse_code_sos(){
//   for(int i = 0; i < 3; i++){
//     digitalWrite(led, HIGH);
//     delay(200);
//     digitalWrite(led, LOW);
//     delay(200);
//   }

//   for(int i = 0; i < 3; i++){
//     digitalWrite(led, HIGH);
//     delay(1000);
//     digitalWrite(led, LOW);
//     delay(200);
//   }
//   for(int i = 0; i < 3; i++){
//     digitalWrite(led, HIGH);
//     delay(200);
//     digitalWrite(led, LOW);
//     delay(200);
//   }

// }

void iloveyou(){
  // i
  digitalWrite(red, HIGH);
  delay(200);
  digitalWrite(red, LOW);
  delay(200);

  digitalWrite(red, HIGH);
  delay(200);
  digitalWrite(red, LOW);
  delay(1000);

  // l 
  digitalWrite(green, HIGH);
  delay(200);
  digitalWrite(green, LOW);
  delay(200);

  digitalWrite(green, HIGH);
  delay(800);
  digitalWrite(green, LOW);
  delay(200);

  digitalWrite(green, HIGH);
  delay(200);
  digitalWrite(green, LOW);
  delay(200);

  digitalWrite(green, HIGH);
  delay(200);
  digitalWrite(green, LOW);
  delay(1000);


  // O 
  digitalWrite(red, HIGH);
  delay(800);
  digitalWrite(red, LOW);
  delay(200);

  digitalWrite(red, HIGH);
  delay(800);
  digitalWrite(red, LOW);
  delay(200);

  digitalWrite(red, HIGH);
  delay(800);
  digitalWrite(red, LOW);
  delay(1000);

  // V
  for(int i = 0; i < 3; i++){
    digitalWrite(green, HIGH);
    delay(200);
    digitalWrite(green, LOW);
    delay(200);
  }

  digitalWrite(green, HIGH);
  delay(800);
  digitalWrite(green, LOW);
  delay(1000);


  // E
  digitalWrite(red, HIGH);
  delay(200);
  digitalWrite(red, LOW);
  delay(1000);


  // Y
  digitalWrite(green, HIGH);
  delay(800);
  digitalWrite(green, LOW);
  delay(200);

  digitalWrite(green, HIGH);
  delay(200);
  digitalWrite(green, LOW);
  delay(200);

  digitalWrite(green, HIGH);
  delay(800);
  digitalWrite(green, LOW);
  delay(200);

  digitalWrite(green, HIGH);
  delay(800);
  digitalWrite(green, LOW);
  delay(1000);

  // O
  digitalWrite(red, HIGH);
  delay(800);
  digitalWrite(red, LOW);
  delay(200);

  digitalWrite(red, HIGH);
  delay(800);
  digitalWrite(red, LOW);
  delay(200);

  digitalWrite(red, HIGH);
  delay(800);
  digitalWrite(red, LOW);
  delay(1000);

  // U
  digitalWrite(green, HIGH);
  delay(200);
  digitalWrite(green, LOW);
  delay(200);

  digitalWrite(green, HIGH);
  delay(200);
  digitalWrite(green, LOW);
  delay(200);

  digitalWrite(green, HIGH);
  delay(800);
  digitalWrite(green, LOW);
  delay(1000);

 

}

void loop() {
  // put your main code here, to run repeatedly:
  iloveyou();
  digitalWrite(red, LOW);
  delay(5000);

}
