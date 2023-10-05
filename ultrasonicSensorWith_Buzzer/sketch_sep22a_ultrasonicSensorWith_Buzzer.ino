const int buzzer = 7;
const int trig = 12;
const int echo = 13;
float duration, distance;
float distanceInInches;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
}

void danger(){
  tone(buzzer, 2000);
  delay(50);
  noTone(buzzer);
  delay(50);
}

void medium(){
  tone(buzzer, 3000);
  delay(300);
  noTone(buzzer);
  delay(300);
}

void warning(){
  tone(buzzer, 5000);
  delay(600);
  noTone(buzzer);
  delay(600);
}

void calculateDistance(){
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  duration = pulseIn(echo, HIGH);
  distance = (duration/2) * 0.0343;
  distanceInInches = distance / 2.54;

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  duration = pulseIn(echo, HIGH);
  distance = (duration/2) * 0.0343;
  distanceInInches = distance / 2.54;


  Serial.print("Distance = ");
  if(distance >= 400 || distance <= 2){
    Serial.println("Out of range");
  }
  else{
    
    while(distanceInInches <= 10){
      Serial.print(distanceInInches);
      Serial.println(" inches");
      danger();
      calculateDistance();
      }

      while(distanceInInches > 10 && distanceInInches <= 30){
        Serial.print(distanceInInches);
        Serial.println(" inches");
        medium();
        calculateDistance();
      }
     

    //  while(distanceInInches > 30 && distanceInInches <= 70){
    //     Serial.print(distanceInInches);
    //     Serial.println(" inches");
    //     warning();
    //     calculateDistance();
    //   }
    



    Serial.print(distanceInInches);
    Serial.println(" inches");
    delay(500);
    

  }
  delay(500);
}
