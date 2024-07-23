struct servoMoveMessage
{
   int  servoNum;
   int positionGoal;
   float interval;
};
 
struct servoMoveMessage message;

void sendStructure(byte *structurePointer, int structureLength)
{
    Serial.write(structurePointer, structureLength);
}

void setup()
{
  Serial.begin(115200);
  
  message.servoNum = 10;
  message.positionGoal = 1200;
  message.interval = 2.5;  

  sendStructure((byte*)&message, sizeof(message));
}

void loop() 
{
  sendStructure((byte*)&message, sizeof(message));
  delay(1000);
  
}
