#define a 3
#define b 5
#define c 6
#define d 9

int val = 8;

int numbers[10][4] =  {{1,0,1,0},  //0
                      {1,0,0,0},  //1
                      {1,1,1,0},  //2
                      {0,1,1,0},  //3
                      {0,0,0,1},  //4
                      {0,0,1,1},  //5
                      {1,0,1,1},  //6
                      {1,1,0,0},  //7
                      {1,1,1,1},  //8
                      {0,1,1,1}};  //9

void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<10;i++){
      if(numbers[i][0] == 1){
        analogWrite(a,val);
      }
      if(numbers[i][1] == 1){
        analogWrite(b,val);
      }
      if(numbers[i][2] == 1){
        analogWrite(c,val);
      }
      if(numbers[i][3] == 1){
        analogWrite(d,val);
      }
      delay(1000);
      analogWrite(a,LOW);
      analogWrite(b,LOW);
      analogWrite(c,LOW);
      analogWrite(d,LOW);
      //delay(100);
  }
}
