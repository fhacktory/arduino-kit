/*
 * The circuit:
 *  Vcc pin to  +5
 *  Trig pin to digital pin 12
 *  Echo pin to digital pin 13
 */

#define CM 1      //Centimeter
#define INC 0     //Inch
#define TP 12      //Trig_pin
#define EP 13      //Echo_pin

void setup()
{
  Serial.begin(9600);
  pinMode(TP,OUTPUT);       // set TP output for trigger  
  pinMode(EP,INPUT);        // set EP input for echo
}

void loop()
{
   long microseconds = TP_init();
   long distacne_cm = Distance(microseconds, CM);
   Serial.print("distance: ");
   Serial.print(distacne_cm);
   Serial.println(" cm");
}

long Distance(long time, int flag)
{
  long distacne;
  if(flag)
    distacne = time /29 / 2  ;     // Distance_CM  = ((Duration of high level)*(Sonic :340m/s))/2
                                   //              = ((Duration of high level)*(Sonic :0.034 cm/us))/2
                                   //              = ((Duration of high level)/(Sonic :29.4 cm/us))/2
  else
    distacne = time / 74 / 2;      // INC
  return distacne;
}

long TP_init()
{                     
  digitalWrite(TP, LOW);                    
  delayMicroseconds(2);
  digitalWrite(TP, HIGH);                 // pull the Trig pin to high level for more than 10us impulse 
  delayMicroseconds(10);
  digitalWrite(TP, LOW);
  long microseconds = pulseIn(EP,HIGH);   // waits for the pin to go HIGH, and returns the length of the pulse in microseconds
  return microseconds;                    // return microseconds
}
