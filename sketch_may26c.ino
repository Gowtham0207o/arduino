void setup() {
  pinMode(6,OUTPUT);
   pinMode(2,INPUT);
  Serial.begin(9600);

}

void loop() {
Serial.println(digitalRead(6));
 
}
