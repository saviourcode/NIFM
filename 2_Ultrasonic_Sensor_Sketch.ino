
int trigPin1=2;
int echoPin1=3;

int trigPin2=4;
int echoPin2=5;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
   pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  
}

void loop() {
  long duration1, distance1;
  digitalWrite(trigPin1, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = (duration1) / 12.399;
{
    Serial.print ( "Sensor1  ");
    Serial.print ( distance1);
    Serial.print ( "duration1 ");
    Serial.print (duration1);
    Serial.println();
  }
  delay(250);
long duration2, distance2;
  digitalWrite(trigPin2, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2= (duration2) / 12.399;

{
    Serial.print("Sensor2  ");
    Serial.print(distance2);
    Serial.print("duration2 ");
    Serial.print(duration2);
    Serial.println();
  }
  delay(250);
 
}
