
void setup() {
  // pin setup
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

// display digit using this function
void displayDigit(int a=0, int b=0, int c=0, int d=0, int e=0, int f=0, int g=0) {
  int pins[10] = {a, b, c, d, e, f, g};
  int i;

  // set HIGH
  for(i = 0; i < 7; i++) {
     if(pins[i] != 0){
      digitalWrite(pins[i], HIGH);
     }
  }
  delay(1000);

  // reset HIGH
  for(i = 0; i < 7; i++) {
     if(pins[i] != 0){
      digitalWrite(pins[i], LOW);
     }
  }
}

void loop() {
  displayDigit(13, 12, 10, 9, 7); // display - 2
  displayDigit(13,12,11,10,7); // display - 3
  displayDigit(12, 11, 8, 7); // display - 4
  displayDigit(13, 11, 10, 8, 7); // display - 5
  displayDigit(13, 11, 10, 9, 8, 7); // display - 6
  displayDigit(13, 12, 11); // display - 7
  displayDigit(13, 12, 11, 10, 9, 8, 7); // display - 8
  displayDigit(13, 12, 11, 10, 8, 7); // display - 9
  
  displayDigit(13, 12, 11, 10, 9, 8); // display - 0
  displayDigit(12, 11); // display - 1
}


