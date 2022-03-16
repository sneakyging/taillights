int blueLED = 13;
int greenLED = 12;
int yellowLED = 11;
int redLED = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(600);
  digitalWrite(blueLED, HIGH);
  delay(100);
  digitalWrite(greenLED, HIGH);
  delay(100);
  digitalWrite(yellowLED, HIGH);
  delay(100);
  digitalWrite(redLED, HIGH);
  delay(100);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);

}
