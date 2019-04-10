int S1 = 2;
int S2 = 3;
int S3 = 4;
int S4 = 7;
int S5 = 8;
int SM;
int SL1;
int SL2;
int SR1;
int SR2;
int mra=6;
int mrb=5;
int mla=11;
int mlb=10;
//int readCLP;
//int readNEAR;

void setup() {
  Serial.begin(9600);
  
  // put your setup code here, to run once:
pinMode(S1,INPUT);
pinMode(S2,INPUT);
pinMode(S3,INPUT);
pinMode(S4,INPUT);
pinMode(S5,INPUT);
pinMode(mra,OUTPUT);
pinMode(mrb,OUTPUT);
pinMode(mla,OUTPUT);
pinMode(mlb,OUTPUT);

//pinMode(CLP,INPUT);
//pinMode(NEAR,INPUT);
}

void loop() {
  SL2=digitalRead(S1);
  SL1=digitalRead(S2);
  SM= digitalRead(S3);
  SR1=digitalRead(S4);
  SR2=digitalRead(S5);
 
 // readCLP= digitalRead(CLP);
 // readNEAR= digitalRead(NEAR);
  Serial.print(SL2);
  Serial.print("          ");
  Serial.print(SL1);
  Serial.print("          ");
  Serial.print(SM);
  Serial.print("          ");
  Serial.print(SR1);
  Serial.print("          ");
  Serial.println(SR2);
  delay(30);
if (SL2==1&&SL1==1&&SM==0&&SR1==1&&SR2==1)
  {
    analogWrite(mra,255);
    analogWrite(mrb,0);
    analogWrite(mla,255);
    analogWrite(mlb,0);
  }
else if (SL2==1&&SL1==1&&SM==0&&SR1==0&&SR2==0)
  {
    analogWrite(mra,0);
    analogWrite(mrb,100);
    analogWrite(mla,255);
    analogWrite(mlb,0);
  }
else if (SL2==1&&SL1==1&&SM==0&&SR1==0&&SR2==1)
  {
    analogWrite(mra,0);
    analogWrite(mrb,100);
    analogWrite(mla,255);
    analogWrite(mlb,0);
    
  }
else if (SL2==1&&SL1==1&&SM==1&&SR1==0&&SR2==0)
  {
    analogWrite(mra,0);
    analogWrite(mrb,100);
    analogWrite(mla,255);
    analogWrite(mlb,0);
    
  }
else if (SL2==1&&SL1==1&&SM==1&&SR1==1&&SR2==0)
  {
    analogWrite(mra,0);
    analogWrite(mrb,100);
    analogWrite(mla,255);
    analogWrite(mlb,0);
    
  }
else if(SL2==1&&SL1==1&&SM==1&&SR1==0&&SR2==1)  
{
    analogWrite(mra,0);
    analogWrite(mrb,100);
    analogWrite(mla,255);
    analogWrite(mlb,0);
    
}
else if(SL2==1&&SL1==1&&SM==0&&SR1==1&&SR2==0)  
{
    analogWrite(mra,0);
    analogWrite(mrb,100);
    analogWrite(mla,255);
    analogWrite(mlb,0);
    
}
else if(SL2==0&&SL1==0&&SM==0&&SR1==1&&SR2==1)  
{
    analogWrite(mra,255);
    analogWrite(mrb,0);
    analogWrite(mla,0);
    analogWrite(mlb,100);
    
}
else if(SL2==1&&SL0==1&&SM==0&&SR1==1&&SR2==1)  
{
    analogWrite(mra,255);
    analogWrite(mrb,0);
    analogWrite(mla,255);
    analogWrite(mlb,0);
}
else if(SL2==0&&SL1==0&&SM==1&&SR1==1&&SR2==1)  
{
    analogWrite(mra,255);
    analogWrite(mrb,0);
    analogWrite(mla,0);
    analogWrite(mlb,100);
}
else if(SL2==0&&SL1==1&&SM==1&&SR1==1&&SR2==1)  
{
    analogWrite(mra,255);
    analogWrite(mrb,0);
    analogWrite(mla,0);
    analogWrite(mlb,100);
}
else if(SL2==1&&SL1==0&&SM==1&&SR1==1&&SR2==1)  
{
    analogWrite(mra,100);
    analogWrite(mrb,0);
    analogWrite(mla,0);
    analogWrite(mlb,255);
}
else if(SL2==0&&SL1==1&&SM==0&&SR1==1&&SR2==1)  
{
    analogWrite(mra,100);
    analogWrite(mrb,0);
    analogWrite(mla,0);
    analogWrite(mlb,255);
}
else
  {
    analogWrite(mra,255);
    analogWrite(mrb,0);
    analogWrite(mla,255);
    analogWrite(mlb,0);
  } 
 // Serial.print("          ");
 // Serial.print(readCLP);
 // Serial.print("          ");
 // Serial.println(readNEAR);
  // put your main code here, to run repeatedly:

}
