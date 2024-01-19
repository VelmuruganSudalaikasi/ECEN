/** ECEN -30
 * Print larget prime eight- digit prime number 
 * */
#include<stdio.h>
int  s_prime(int ,int);
int main(){
int start=99999999,end=10000000;
printf("Largest eight-digit prime number %d\n",s_prime(start,end));
return 0;
}

int s_prime(int start,int end){
int  flag,i,large_prime=0;
while(start > end){
flag=1,i=2;

while(i*i <= start){

if(!(start%i)){ flag=0; break;}
i++;
}
if(flag) return start;
start--;
}
//printf("largest prime %lld ",large_prime);
return -1;
}
