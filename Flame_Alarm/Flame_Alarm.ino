//Name: Flame Alarm
//After doing the circuit, light a fire close to the sensor 
//If the sensor detects it, the buzzer will create a sound
//https://www.makerlab-electronics.com/


int flameSensorPin = 0; //  a0 
int flameSensorReading; 
int buzzerPin=8; 
int led = 9;
void setup() 
{  
  Serial.begin(9600);
  pinMode(buzzerPin,OUTPUT);
  pinMode(led,OUTPUT);
} 

void alarm(){
  tone(buzzerPin, 1000);
   digitalWrite(led, HIGH);
  delay(100);
  noTone(buzzerPin);
  digitalWrite(led, LOW);
  delay(5);
}
void loop() 
{ 
  flameSensorReading = analogRead(flameSensorPin);  
  if(flameSensorReading<1023)
{
  alarm();

}
else
{
  noTone(buzzerPin);
  digitalWrite(led, LOW);
}
 Serial.print("Analog reading = "); 
 Serial.println(flameSensorReading); // the raw analog reading delay(1000); 
 delay(500);
}
