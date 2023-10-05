const int red = 8;
const int green = 10;
const int buzzer = 11;
const int soundLevel = 2000;
const int end = 1500;
const int shortDelay = 70;
const int  longDelay = 250;


void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);
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
  tone(buzzer, soundLevel);
  delay(shortDelay);
  noTone(buzzer);
  digitalWrite(red, LOW);
  delay(shortDelay);

  digitalWrite(red, HIGH);
  tone(buzzer, soundLevel);
  delay(shortDelay);
  digitalWrite(red, LOW);
  noTone(buzzer);
  delay(end);

  // l 
  digitalWrite(green, HIGH);
  tone(buzzer, soundLevel);
  delay(shortDelay);
  
  digitalWrite(green, LOW);
  noTone(buzzer);
  delay(shortDelay);

  digitalWrite(green, HIGH);
  tone(buzzer, soundLevel);
  delay(longDelay);
  digitalWrite(green, LOW);
  noTone(buzzer);
  delay(shortDelay);

  digitalWrite(green, HIGH);
  tone(buzzer, soundLevel);
  delay(shortDelay);
  digitalWrite(green, LOW);
  noTone(buzzer);
  delay(shortDelay);

  digitalWrite(green, HIGH);
  tone(buzzer, soundLevel);
  delay(shortDelay);
  digitalWrite(green, LOW);
  noTone(buzzer);
  delay(end);


  // O 
  digitalWrite(red, HIGH);
  tone(buzzer, soundLevel);
  delay(longDelay);
  digitalWrite(red, LOW);
  noTone(buzzer);
  delay(shortDelay);

  digitalWrite(red, HIGH);
  tone(buzzer, soundLevel);
  delay(longDelay);
  digitalWrite(red, LOW);
  noTone(buzzer);
  delay(shortDelay);

  digitalWrite(red, HIGH);
  tone(buzzer, soundLevel);
  delay(longDelay);
  digitalWrite(red, LOW);
  noTone(buzzer);
  delay(end);

  // V
  for(int i = 0; i < 3; i++){
    digitalWrite(green, HIGH);
    tone(buzzer, soundLevel);
    delay(shortDelay);
    digitalWrite(green, LOW);
    noTone(buzzer);
    delay(shortDelay);
  }

  digitalWrite(green, HIGH);
  tone(buzzer, soundLevel);
  delay(longDelay);
  digitalWrite(green, LOW);
  noTone(buzzer);
  delay(end);


  // E
  digitalWrite(red, HIGH);
  tone(buzzer, soundLevel);
  delay(shortDelay);
  digitalWrite(red, LOW);
  noTone(buzzer);
  delay(end);


  // Y
  digitalWrite(green, HIGH);
  tone(buzzer, soundLevel);
  delay(longDelay);
  digitalWrite(green, LOW);
  noTone(buzzer);
  delay(shortDelay);

  digitalWrite(green, HIGH);
  tone(buzzer, soundLevel);
  delay(shortDelay);
  digitalWrite(green, LOW);
  noTone(buzzer);
  delay(shortDelay);

  digitalWrite(green, HIGH);
  tone(buzzer, soundLevel);
  delay(longDelay);
  digitalWrite(green, LOW);
  noTone(buzzer);
  delay(shortDelay);

  digitalWrite(green, HIGH);
  tone(buzzer, soundLevel);
  delay(longDelay);
  digitalWrite(green, LOW);
  noTone(buzzer);
  delay(end);

  // O
  digitalWrite(red, HIGH);
  tone(buzzer, soundLevel);
  delay(longDelay);
  digitalWrite(red, LOW);
  noTone(buzzer);
  delay(shortDelay);

  digitalWrite(red, HIGH);
  tone(buzzer, soundLevel);
  delay(longDelay);
  digitalWrite(red, LOW);
  noTone(buzzer);
  delay(shortDelay);

  digitalWrite(red, HIGH);
  tone(buzzer, soundLevel);
  delay(longDelay);
  digitalWrite(red, LOW);
  noTone(buzzer);
  delay(end);

  // U
  digitalWrite(green, HIGH);
  tone(buzzer, soundLevel);
  delay(shortDelay);
  digitalWrite(green, LOW);
  noTone(buzzer);
  delay(shortDelay);

  digitalWrite(green, HIGH);
  tone(buzzer, soundLevel);
  delay(shortDelay);
  digitalWrite(green, LOW);
  noTone(buzzer);
  delay(shortDelay);

  digitalWrite(green, HIGH);
  tone(buzzer, soundLevel);
  delay(longDelay);
  digitalWrite(green, LOW);
  noTone(buzzer);
  delay(end);

 

}

void loop() {
  // put your main code here, to run repeatedly:
  iloveyou();
  digitalWrite(red, LOW);
  delay(5000);

}
