int RED = 8;
int brightness = 0; 
int fadeAmount = 10;


void setup(){
  
  
  pinMode(RED,OUTPUT);
  
}

void loop(){
  
  digitalWrite(RED,brightness);
  brightness = brightness+fadeAmount;
  
  if(brightness <= 0 || brightness >= 255){
    fadeAmount = -fadeAmount;
  }
  delay(30);
}