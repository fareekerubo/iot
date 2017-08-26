int trigg_pin=10;
int echo_pin=11;
long duration,cm;

void setup() {
    Serial.begin(9600);
    while(!Serial){
        ;
    }
    pinMode(trigg_pin, OUTPUT);
    pinMode(echo_pin, INPUT);

}

void loop() {
    digitalWrite(trigg_pin,LOW);
    delayMicroseconds(5);
    digitalWrite(trigg_pin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigg_pin,LOW);

  //  pinMode(echo_pin,INPUT);
    duration =pulseIn(echo_pin,HIGH);
    cm = (duration/2)/29.1;


    Serial.print(F("Distance in cm: "));
    Serial.println(cm);
    delay(500);



}