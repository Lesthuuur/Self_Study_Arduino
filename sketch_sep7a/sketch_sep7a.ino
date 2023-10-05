// C++ code
//
const int buzzer = 2;
const int green = 4;
const int orange = 7;
const int red = 13;

// void setup()
// {
//   pinMode(buzzer, OUTPUT);
//   pinMode(green, OUTPUT);
//   pinMode(orange, OUTPUT);
//   pinMode(red, OUTPUT);
// }

// void loop()
// {
//   digitalWrite(green, HIGH);
//   tone(buzzer, 1000);
//   delay(1000);
//   digitalWrite(green, LOW);
//   noTone(buzzer);
//   delay(1000);
  
  
  
//   digitalWrite(orange, HIGH);
//   tone(buzzer, 2000);
//   delay(1000);
//   digitalWrite(orange, LOW);
//   noTone(buzzer);
//   delay(1000);
  
  
//   digitalWrite(red, HIGH);
//   tone(buzzer, 2500);
//   delay(1000);
//   digitalWrite(red, LOW);
//   noTone(buzzer);
//   delay(1000);





//   function warning(){
//     tone(buzzer, 2500);
//     delay(500);
//     noTone(buzzer);
//     delay(500);
//   }
  
// }


void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(red, OUTPUT);
  
  
  
}

void warning(){
      tone(buzzer, 2500);
      delay(300);
      noTone(buzzer);
      delay(300);
    }


void chill(){
      tone(buzzer, 2500);
      delay(300);
      noTone(buzzer);
      delay(300);
}

void buzzerBlink(){
      digitalWrite(red, HIGH);
      tone(buzzer, 2500);
      delay(300);
      noTone(buzzer);
      digitalWrite(red, LOW);
      delay(300);
      
}

void loop()
{
  
    
  
  
  digitalWrite(green, HIGH);
  tone(buzzer, 1000);
  delay(1000);
  digitalWrite(green, LOW);
  noTone(buzzer);
  delay(1000);
  
  
  
  digitalWrite(orange, HIGH);
  tone(buzzer, 2000);
  delay(1000);
  digitalWrite(orange, LOW);
  noTone(buzzer);
  delay(1000);

  

  
  
  
  buzzerBlink();
  buzzerBlink();
  buzzerBlink();
  buzzerBlink();
  
  delay(1000);
 
  
}