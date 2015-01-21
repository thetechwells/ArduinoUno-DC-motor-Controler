// Pin 2 
const int led = 2;
const int but1 = 7;
const int but2 = 8;


int seconds = 10;
// the setup routine runs once when you press reset:
void setup() {     
  // initialize the digital pin as an output/input:
  pinMode(led, OUTPUT);
  pinMode(but1, INPUT);
  pinMode(but2, INPUT);
  Serial.begin(9600);
}
void loop() {
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    delay(10);
    int AI1 = digitalRead(but1);
    int AI2 = digitalRead(but2);
    
    if (AI1 = HIGH) {
        if (seconds < 15) {
          seconds + 1;
          Serial.println("+1");
          delay(1); 
        }
    }
    else if (AI2 = HIGH) {
        if (seconds > 0); {
            seconds = seconds - 1;
            Serial.println("-1");
            delay(1);
        }
    }
    else {
        seconds = seconds;
    }
    
    digitalWrite(led, HIGH);    // turn the LED on (HIGH is the voltage level)
    delay(1000);                // wait for a second
    digitalWrite(led, LOW);     // turn the LED off by making the voltage LOW
    delay(seconds);                // wait for a second
    Serial.println(seconds);
    delay(1);
}
