/*Write a program to get a number from user and interchange the first and last digit and print the result.
 *
 *
 * example:
 *
 *   input : 1234 output :4231
 * */

#include<stdio.h>
#include<math.h>
void main(){
int x;
printf("Enter the Number:");
scanf("%d",&x);
int firstDigit=x%10;
int count=pow(10,((int)(log(x)/log(10))));
x-=firstDigit;
int lastDigit=(x/(count));
x-=(lastDigit * count);
firstDigit=(firstDigit*count);	
x=x+lastDigit+firstDigit;
printf("Result=%d",x);


}
