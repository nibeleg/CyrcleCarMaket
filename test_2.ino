//motor
int S_A=11; //speed motor a
int M_A1=2; //motor a = +
int M_A2=3; //motor a = -
int M_B1=4; //motor b = -
int M_B2= 5; //motor b = +
int S_B=10; //speed motor b

void setup() {
pinMode(M_B1, OUTPUT);
pinMode(M_B2, OUTPUT);
pinMode(M_A1, OUTPUT);
pinMode(M_A2, OUTPUT); 
pinMode(S_B, OUTPUT);
pinMode(S_A, OUTPUT);

analogWrite(S_A, 100);
analogWrite(S_B, 2000);
delay(200);
}
void loop() {
  digitalWrite(M_A1, LOW);
  digitalWrite(M_A2, LOW);
  digitalWrite(M_B1, HIGH);
  digitalWrite(M_B2, LOW);

 
}
