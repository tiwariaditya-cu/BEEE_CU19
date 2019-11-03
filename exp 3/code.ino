void setup() {
for(int x = 10; x <= 13; x++){
  pinMode(x, OUTPUT);
  }

}

void loop() {
 for(int x = 10; x <14; x++){
  allLEDsOff();
  
  if(x!=13){
    digitalWrite(x, HIGH);
    digitalWrite(x+1, HIGH);
    delay(200);
    
  }
  else
  digitalWrite(x, HIGH);
  digitalWrite(x-3, HIGH);
  delay(200);
  allLEDsOff();
 }

}

void allLEDsOff(void){
  for(int x = 10; x<=14; x++){
    digitalWrite(x, LOW);
    
  }
  delay(100);
}
