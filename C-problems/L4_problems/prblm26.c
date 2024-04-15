/** ECEN -26
 * Print the small three digit prime number 
 * */
#include<stdio.h>
int s_prime(int,int);
int main(){

printf("Smallest three digit prime number is %d\n",s_prime(100,1000));	
return 0;
}

int s_prime(int start,int end){
int flag,i;
while(start < end){
flag=1,i=2;

while(i*i <= start){

if(!(start%i)){ flag=0; break;}
i++;
}
if(flag) return start;
start++;
}
return -1;
}
