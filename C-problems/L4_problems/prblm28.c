/** ECEN -28
 * Print the small four digit prime number 
 * */
#include<stdio.h>
int s_prime(int,int);
int main(){
printf("Smallest Four digit prime number is %d\n",s_prime(1000,10000));	
return 0;
}

int s_prime(int start,int end){
int flag,i,large_prime;
while(start < end){
flag=1,i=2;

while(i*i <= start){

if(!(start%i)) {flag=0;
break;}
i++;
}
if(flag) return start;
start++;
}
return -1;
}
