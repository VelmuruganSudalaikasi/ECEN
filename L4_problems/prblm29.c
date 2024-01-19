/** ECEN -29
 * Print large small four digit prime number 
 * */
#include<stdio.h>
int s_prime(int,int);
int main(){
int start=9999,end=1000;
printf("Largest Four digit prime number is %d\n",s_prime(start,end));	
return 0;
}

int s_prime(int start,int end){
int flag,i;
while(start >  end){
flag=1,i=2;

while(i*i <= start){

if(!(start%i)){ flag=0; break;}
	i++;
}
if(flag) return start;
start--;
}
return -1;
}
