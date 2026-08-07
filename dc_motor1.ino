// First L293D
const int ENA = 5;
const int IN1 = 2;
const int IN2 = 3;

const int ENB = 6;
const int IN3 = 4;
const int IN4 = 7;

// Second L293D
const int ENA2 = 8;
const int IN5 = 9;
const int IN6 = 10;

const int ENB2 = 11;
const int IN7 = 12;
const int IN8 = 13;

void setup() {

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(ENA2, OUTPUT);
  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);
  pinMode(ENB2, OUTPUT);
  pinMode(IN7, OUTPUT);
  pinMode(IN8, OUTPUT);

  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);
  digitalWrite(ENA2, HIGH);
  digitalWrite(ENB2, HIGH);
}

void loop() {

  // Forward (30 sec) 
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  digitalWrite(IN5, LOW);
  digitalWrite(IN6, HIGH);

  digitalWrite(IN7, LOW);
  digitalWrite(IN8, HIGH);

  delay(30000);


  // Backward (60 sec)
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  digitalWrite(IN5, HIGH);
  digitalWrite(IN6, LOW);

  digitalWrite(IN7, HIGH);
  digitalWrite(IN8, LOW);

  delay(60000);


  // Right (30 sec) 
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  digitalWrite(IN5, LOW);
  digitalWrite(IN6, HIGH);

  digitalWrite(IN7, HIGH);
  digitalWrite(IN8, LOW);

  delay(30000);


  //  Left (30 sec)
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  digitalWrite(IN5, HIGH);
  digitalWrite(IN6, LOW);

  digitalWrite(IN7, LOW);
  digitalWrite(IN8, HIGH);

  delay(30000);

}