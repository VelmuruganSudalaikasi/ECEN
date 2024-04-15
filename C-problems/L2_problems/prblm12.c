/*Write a program to get a number form user and print the sum of all digits
 * ex: input : 123 output : 6
 * */

#include<stdio.h>
void main(){
int x;
printf("Enter the Number:");
scanf("%d",&x);

int sum=0;

while(x!=0){
sum+=x%10;
x/=10;

}
printf("sum of digits=%d\n",sum);

}
