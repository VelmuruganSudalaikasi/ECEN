/** ECEN - 23 
 * Write a program to pring the sum of single digit prime number 
 * */

#include<stdio.h>
int main(){
int p_sum=0,i,flag;
int start=1,end=10;

while(start < end){
i=2,flag=1;

while(i*i <= start){

if(!(start%i)){
    flag=0;break;
}
    i++;
}
if(flag) p_sum+=start;
start++;
}
printf("Sum of single digit prime number count %d\n:",p_sum);


}
