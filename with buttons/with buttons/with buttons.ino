
 
// Pin 2 
const int led = 2;

const int but1 = A0;
const int but2 = A1;

int seconds = 0
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output:
  pinMode(led, OUTPUT);
  // initialize serial communications:
  Serial.begin(9600)
}
void loop() {
    int AI1 = analogRead(but1);
    int AI2 = analogRead(but2);
    
    if (AI1 = HIGH) {
        if (seconds !15 || seconds > 15) {
            (seconds += 1);
        }
    }
    else if (AI2 = HIGH); {
        (seconds !0); {
            (seconds -= 1);
        }
    }
}