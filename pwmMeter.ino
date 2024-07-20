#define meterPin   2
#define triggerPin 3  // HIGH for trigger
int val = 0;

void setup() {
  pinMode(triggerPin, INPUT_PULLUP);
  pinMode(meterPin, OUTPUT);
}

void loop() {
  if (digitalRead(triggerPin))
  {
    val = random(100,230); // set value 
  } 
  else
  {
    val = 100;
  }
  analogWrite(meterPin, val); // analogWrite values from 0 to 255
  delay(5);
}
