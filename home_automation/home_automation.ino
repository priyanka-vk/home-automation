#define in 14
#define out 19
#define relay 2
int count=0;
void setup(){
pinMode(in, INPUT);
pinMode(out, INPUT);
pinMode(relay, OUTPUT);}
void IN(){
count++;
delay(1000);}
void OUT(){
count--;
delay(1000);}
void loop(){
if(digitalRead(in))
IN();
if(digitalRead(out))
OUT();
if(count<=0){
digitalWrite(relay, LOW);
delay(200); }
else
digitalWrite(relay, HIGH);
}
