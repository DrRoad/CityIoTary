int led = 13; 
int obstaclePin[2]={3,4,};
int hasObstacle = LOW;  
void setup() {
  pinMode(LED, OUTPUT);
  for( int i=0;i<=1;i++)
  {pinMode(obstaclePin[i],INPUT);
  }
  Serial.begin(9600);  
}
void loop() {
  for(int i=0;i<=1;i++)
  {
    Serial.print(obstaclePin[i]);
  hasObstacle = digitalRead(obstaclePin[i]); 
  if (hasObstacle == HIGH)
  {
    Serial.println("Stop something is ahead!!");
    digitalWrite(LED, HIGH);
  }
  else
  {
    Serial.println("Path is clear");
    digitalWrite(LED, LOW);
  }
  }
  delay(2000);
}
