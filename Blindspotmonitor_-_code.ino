int const trigPin = 10;
int const echoPin = 9;
int const buzzPin = 2;
int SPEAKER = 8;

void setup()
{
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(buzzPin, OUTPUT); 
  pinMode(SPEAKER, OUTPUT);
}

void loop()
{
 
  int duration, distance,freq=0;
  
  digitalWrite(trigPin, HIGH); 
  delay(1);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  
  distance = (duration/2) / 29.1;
   
    if (distance <= 50 && distance >= 0) {
      freq+=100;
      
      tone(SPEAKER, freq);
      
    } else {
      // Don't buzz
      digitalWrite(buzzPin, LOW);
    }
    
    delay(60);
}
