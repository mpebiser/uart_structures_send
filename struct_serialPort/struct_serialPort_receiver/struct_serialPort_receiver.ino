struct servoMoveMessage
{
   int  servoNum;
   int positionGoal;
   float interval;
};
 
struct servoMoveMessage message;

void recieveStructure(byte *structurePointer, int structureLength)
{
  if(Serial.available() < sizeof(message)) return;
  Serial.readBytes(structurePointer, structureLength);
}

void setup()
{
  Serial.begin(115200);
  recieveStructure((byte*)&message, sizeof(message));
}

void loop() 
{
}
