
void setup() 
{
  Serial.begin(9600);

  pinMode(25,OUTPUT);
  digitalWrite(25,LOW);

}

void loop() 
{
  String input = "";

  while (Serial.available() > 0)
  {
  //input = (char) Serial.read(); 
  input =Serial.readString();
  
  //Serial.println(input);
  
  //delay(5); 
  }

  if(input == "LED ON")
  {
    digitalWrite(25,HIGH);
  }

  else if(input == "LED OFF")
  {
    digitalWrite(25,LOW);
  }

}
