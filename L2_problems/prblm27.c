/*Write a program to print the total count of numbers which are less than 
 * 100000 and whose sum of digit is 14.
 *
 * */
#include<stdio.h>

void main(){
int x;
int count=0;
for(x=1;x<100000;x++){
int temp=x;
int sum=0;
while(temp!=0){
sum+=(temp%10);
temp/=10;

}
if(sum==14){count++;}

}
printf("count=%d",count);



}
