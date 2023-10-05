// C++ code
//
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int dp = 9;
int buzz = 13;

void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
  
}

void counter(int digit){
	int numberSegment[] = {a, b, c, d, e, f, g};
  
  	if(digit < 0 || digit > 9){
    	return;
  	}
  
  	int binary[10][7] = {
      {1, 1, 1, 1, 1, 1, 0}, // 0
      {0, 1, 1, 0, 0, 0, 0}, // 1
      {1, 1, 0, 1, 1, 0, 1}, // 2
      {1, 1, 1, 1, 0, 0, 1}, // 3
      {0, 1, 1, 0, 0, 1, 1}, // 4
      {1, 0, 1, 1, 0, 1, 1}, // 5
      {1, 0, 1, 1, 1, 1, 1}, // 6
      {1, 1, 1, 0, 0, 0, 0}, // 7
      {1, 1, 1, 1, 1, 1, 1}, // 8
      {1, 1, 1, 1, 0, 1, 1}  // 9
    };
  
  	for(int i = 0; i < 7; i++){
    	digitalWrite(numberSegment[i], binary[digit][i]);
     
  
  	}
    tone(buzz, 2000);
  	delay(1000);
  	for(int i = 0; i < 7; i++){
    	digitalWrite(numberSegment[i], LOW);

  	}
    noTone(buzz);
    delay(500);
}
                 




void loop()
{
  counter(0);
  counter(1);
  counter(2);
  counter(3);
  counter(4);
  counter(5);
  counter(6);
  counter(7);
  counter(8);
  counter(9);
  
  
}