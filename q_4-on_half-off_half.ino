// global variable
int a = 13, b = 12, c = 11, d = 10, e = 9, f = 8;

void setup() {
  //all pins
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT); 

  //first ON all lights
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  delay(1000);
}

void firstHalf() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
}

void secondHalf() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
}

void loop() {
  firstHalf();
  delay(1000);
  secondHalf();
  delay(1000);
}

// Name: Nur Mohammad
// Roll: 40
// Batch: E-72
// Dept.: CSE
