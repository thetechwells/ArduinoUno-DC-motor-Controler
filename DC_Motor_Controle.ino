
 
// Pin 2 
int led = 2;

int but1 = A0;
int but2 = A1;
int but3 = A2;
int but4 = A3;
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output:
  pinMode(led, OUTPUT);
  // initialize serial communications:
  Serial.begin(9600);
}

AI1 = analogRead(but1);
if AI1 > threshold 
// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(10);               // wait for a second
}
