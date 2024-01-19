/** ECEN - 22
 * Write a program to print the total number of three digit prime numbers
 * */
#include<stdio.h>
int main(){
int pcount=0,i,flag;
int start=100,end=1000;
while(start < end){
flag=1,i=2;
while(i*i <= start){

if(!(start%i)){
flag=0;
break;
}i++;
}
if(flag) pcount++;
start++;

}
printf("NO of prime number in this count is %d\n",pcount);

return 0;
}
