#define portf_r 0x30
#define portf_d 0x31
#define portk_r 0x107
#define portk_d 0x108
#define portk_i 0x106
void initf();
void initk();
void wait(long);
static volatile unsigned char* dir=NULL;
static volatile unsigned char* out_data=NULL;
static volatile unsigned char* in_data=NULL;
void init_f(unsigned char x){
  dir=portf_r;
  *dir=x;
 
}
void init_k(unsigned char x){
  dir=portk_r;
  *dir=x;

}
void write_f(unsigned char val){
   out_data=portf_d;
   *out_data=val;
   wait(99999);
}

unsigned char read_k(){
unsigned char* val=portk_i;
 return (*val);

}
void wait(long buf){
  volatile long t=buf;
 for(;t>=0 ;t--);
}

void blink_f(unsigned char data, unsigned char times){
      write_f(0x00);
      for(int i=0;i<times;i++)
      {
        write_f(data);
        write_f(0x00);
      }
}

void lsb_to_msb_f(){
  unsigned char a=0;
  for(int i=0;i<=8;i++){
          a|=1<<i;
          write_f(a);
         }
}
void msb_to_lsb_f(){
unsigned char a=0;
  for(int i=0;i<=8;i++){
        a|=0x80>>i;
        write_f(a);
      }

}