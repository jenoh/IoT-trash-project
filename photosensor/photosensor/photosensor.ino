int sensorPin = 2; //define analog pin 2
int ledPin = 11;
int value = 0; 

void setup() {  
  pinMode(ledPin, OUTPUT);  // set the LED pin as output      

  Serial.begin(9600); 
} 

void loop() {
  value = analogRead(sensorPin); 
  Serial.println(value, DEC); // light intensity
                // high values for bright environment
                // low values for dark environment
  if (value > 900) {
    digitalWrite(ledPin, HIGH);  
  } else {
    digitalWrite(ledPin, LOW);  
  }
  
  delay(100); 
}
