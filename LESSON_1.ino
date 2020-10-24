int LEDPin=13;
int Wait=500;
int WaitOn=1000;
int NewPin=9;
int WaitNew=700;
int APin=7;

void setup() {
 pinMode(LEDPin, OUTPUT) ;
 pinMode(NewPin, OUTPUT);
 pinMode(APin, OUTPUT);
}

void loop() {
 digitalWrite(LEDPin, HIGH);
 delay(WaitOn);
 digitalWrite(LEDPin, LOW);
 delay(Wait);
 digitalWrite(NewPin,HIGH);
 delay(WaitNew);
 digitalWrite(NewPin, LOW);
 delay(Wait);
 digitalWrite(APin,HIGH);

} 
