void init_p();

void wait(unsigned long);

void init_f(){
volatile unsigned char* dir;
dir=(unsigned char*)0x30;
*dir=0xff;
}


void output_f(unsigned char data){ 
  volatile unsigned char* out;
out=(unsigned char*)0x31;
*out=data;
}

void wait( volatile unsigned long x){
while(x--);
}