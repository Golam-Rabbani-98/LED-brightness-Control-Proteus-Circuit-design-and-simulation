
int led=12;
void setup() {

  pinMode (led,OUTPUT);

}

void loop() {

for(int i=0;i<=255;i=i+10)
 { analogWrite(led,i);
  delay(50);
}
for(int j=255;j>=0;j=j-10)
{
  analogWrite(led,j);
  delay(50);
}

}
