/** ECEN-21 
 * Write a program to print the total number of Two digit prime numbers
 **/

#include<stdio.h>
int main(){
int pcount=0,iter,num=2,flag;
int start=10,end=100;
while(start < end){
flag=1,iter=2;
while(iter * iter <= start){
if(!(start%iter)){
flag=0; break;	}
iter++;
}
if(flag) pcount++;
start++;
}
printf("no of prime number %d\n",pcount);
return 0;
}
