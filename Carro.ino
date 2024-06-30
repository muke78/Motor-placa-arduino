==============Codigo 1===============
int motor = 9;

void setup(){
pinMode(motor,OUTPUT);
}

void loop(){
int onTime = 2500;
int offTime = 1000;
digitalWrite(motor,HIGH);
delay(onTime);
digitalWrite(motor,LOW);
delay(offTime);
}

==============Codigo 2===============
int motor = 9;

void setup(){
pinMode(motor,OUTPUT);
}

void setup(){
int onSpeed = 200;
int onTime = 2500;
int offSpeed = 50;
int offTime = 1000;
analogWrite(motor,onSpeed);
delay(onTime);
analogWrite(motor,offSpeed);
delay(offTime);
}
==============Codigo 3===============
int motor = 9;

void setup(){
pinMode(motor,OUTPUT);
}

void loop(){
int delayTime(50);
for(int i=0;i<=256;i++){
analogWrite(motor,i);
delay(delayTime);
}
for(int i=255;i>=0;i--){
analogWrite(motor,i);
delay(delayTime);
}
}
==============Codigo 4===============
int motor = 9;
int potPin = 0;
int potValue;

void setup(){
pinMode(motor,OUTPUT);
}

void loop(){
potValue = analogRead(potPin)/4;
analogWrite(motor,potValue);
}

