#define LEDpin 6
#define Button 7 
int ButtonState = 0;

void setup(){
 pinMode(LEDpin, OUTPUT); 
 pinMode(Button, INPUT); 
}

void loop(){
  
  ButtonState=digitalRead(Button);
  
  if(ButtonState==1){

    digitalWrite(LEDpin, HIGH);
  }
  else{
    
    digitalWrite(LEDpin, LOW);
  }
  
}
  



