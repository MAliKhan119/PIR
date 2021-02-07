const int LED=7;
const int PIR=9;
void setup() 
{
pinMode(LED,OUTPUT);
pinMode(PIR,INPUT);
}

void loop() 
{
int sensor_input = digitalRead(9);
if(sensor_input == 1)
{
  digitalWrite(LED,HIGH);
}
else
{
digitalWrite(LED,LOW);  
}
}
