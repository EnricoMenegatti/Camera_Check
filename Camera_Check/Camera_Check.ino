int analogInPin = A0;
int sensorValue;
double thisTime, lastTime, lightTime;
 
void setup() 
{
  Serial.begin(115200);
  //Serial.println("Setup...");
  
  pinMode(analogInPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  
}
 
void loop() 
{
  thisTime = millis();
  sensorValue = analogRead(analogInPin);  
  
  if(sensorValue>700)
  {
    digitalWrite(LED_BUILTIN,HIGH);
    lightTime = lastTime - thisTime;
  }
  else
  {
    digitalWrite(LED_BUILTIN,LOW);
    lastTime = millis();
  }

  Serial.println(sensorValue);
  Serial.println(sensorValue);      
}