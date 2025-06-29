#define trig 27
#define echo 14
#define led 13
#define buzzer 12
#define base 32 //Transistor's base.
float distance=0;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);  
  pinMode(base,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  // Measure distance
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  // Calculate time
  int time=pulseIn(echo,HIGH);
  distance=time*0.017;
  
  // Main logic
  if(distance<=60 && distance>=0){

    //Initial LED condition
    digitalWrite(led,HIGH);
    delay(500);
    
    //Start the pump 1st time
    digitalWrite(base,HIGH);
    delay(3000);
    digitalWrite(base,LOW);
    delay(500);

    //Wait for 20 seconds
    delay(20000)

    //Start the pump 2nd time
    digitalWrite(base,HIGH);
    delay(5000);
    digitalWrite(base,LOW);
    delay(500);

    //Completion Alert
    digitalWrite(buzzer,HIGH);
    delay(2000);
    digitalWrite(buzzer,LOW);
    delay(500);
    digitalWrite(led,LOW)
  }-
}