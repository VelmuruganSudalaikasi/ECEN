/*
 *Write a program get number form user print the total number of single 
 *digit prime numbers in the number
 * 
 * input : 163496481 output:1
 * input : 364925 output: 3
 *
 * */

#include<stdio.h>
void main(){
int x;
scanf("%d",&x);
int flag=1;
int count=0;
while(x!=0){
int digit=x%10;
for(int div=2;(div*div) <= digit;div++){
if(digit%div==0){
	flag=0;
	break;
}
}
if(flag && digit > 1) count++;
flag=1;
x/=10;
}
printf("count=%d",count);

}
