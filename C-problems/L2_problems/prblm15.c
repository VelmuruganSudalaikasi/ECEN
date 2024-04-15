/*
 *Write a program to get a number from user and if the last digit of the number is even prit the same number. if the last digit of the number is odd then subtract 1 from the last digit and print the number.

input : 123 output: 23
input: 22 output:22
 * */

#include<stdio.h>
#include<math.h>
void main(){
int x;
printf("Enter the number");
scanf("%d",&x);
if(x%2!=0){
int count=pow(10,((int)(log(x)/log(10))));
x-=count;
}
printf("Result=%d",x);

}
