#define G1 A3
#define G2 A2
#define G3 A0
#define G4 A1
void setup() {
  pinMode(G1, INPUT);
  pinMode(G2, INPUT);
  pinMode(G3, INPUT);
  pinMode(G4, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool g1 = digitalRead(G1) == LOW;
  bool g2 = digitalRead(G2) == LOW;
  bool g3 = digitalRead(G3) == LOW;
  bool g4 = digitalRead(G4) == LOW;
  if (g1 && g4) {
    Serial.println("1");
  } else if(g2 && g4) {
    Serial.println("2");
  } else if(g1 && !g3 && !g4) {
    Serial.println("3");
  } else if(g2 && !g3 && !g4) {
    Serial.println("4");
  } else if(g1 && g3) {
    Serial.println("5");
  } else if(g2 && g3) { 
    Serial.println("R");
  } else {
    Serial.println("N");
  }
  delay(100);
}
