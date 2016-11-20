int sensorPin =A5;
float sensorValue = 0;
float Vo= 0;
float R2 =0;
float force=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
delay(3000);
Serial.println("FSR Analog Test");
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue =analogRead(sensorPin);
Vo =(sensorValue)*1023;
R2= ((Vo)*10000)/(5-(Vo)) ;
force= R2*0.9798;
force= (force/1000)*(9.8);
force= force*0.224809;

Serial.print("Force:  ");
Serial.println(force);
delay(100);


}
