//ne znam kakvo je pravilo pisanja u arduinu,
//sledeci put cu da se potrudim da sve bude na engleskom

int trigPin = 11;    // Trigger
int echoPin = 12; 	 // Echo
int vrednost, buzzPin = 3; 		 //buzzer
long duration, cm;


void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzPin, OUTPUT);
}
 
void loop() {
  //salje se impuls od 10 mikrosekundi 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  //trajanje signala duration je podeljeno sa 2
  //jer signal putuje duplu distancu, od senzora do
  //objekta i natrag 
  //pomnozeno je sa 343m/s, tj. 0.0343cm/us
  
  cm = (duration/2) * 0.03432;
  //ukoliko je u opsegu treba da zvoni buzzer i da 
  //ispisuje distancu na monitoru 
  if (cm<300 && cm>20)
  {
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  //sad treba programirati zvucnik da pisti frekvencijom
  //koja je odredjena distancom 
  vrednost = map(cm, 20, 300, 1000, 2000);
  tone(buzzPin, vrednost);
  }
  else
  {
  Serial.print("Distance=Out of range");
  Serial.println();
  noTone(buzzPin);
  }
  
  delay(300);
  
  
}
