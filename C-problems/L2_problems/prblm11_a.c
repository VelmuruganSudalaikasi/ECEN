/*Write a program to get a number from user and print the total number of digits in that number
 *
 * input: 12345 output: 5
 * input:123   output:3
 * */
#include<stdio.h>
#include<math.h>
int main(){
int x;
printf("Enter the Number:");
scanf("%d",&x);
int digits= (log(x)/log(10));
printf("digits=%d",digits+1);

}
