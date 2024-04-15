/*
 *Write a program get number from user print the total number two-digits which are odd in the number.
 * 
 *Example : input : 12345678 output :4
 *
 * */
#include<stdio.h>
void main(){
int x;
scanf("%d",&x);
int count=0;
while(x!=0 && x >9){
int digit=x%100;
if(digit%2==1) count++;
x/=10;

}
printf("count=%d",count);

}
