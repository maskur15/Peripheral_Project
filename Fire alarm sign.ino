#define sensor1 A0
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(115200);
}

void loop() {
int value1=analogRead(sensor1);
int temp1=value1*(5.0/1023.0)*100;
Serial.print("temperature: ");
Serial.println(temp1);
// put your main code here, to run repeatedly:
if(temp1>30)
{
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
}
else{
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);

}
 delay(1000);
  //delay(1000);
}
 
