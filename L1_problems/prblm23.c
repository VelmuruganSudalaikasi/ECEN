/*Get a two digit number from user and subtract 5 form that number if the sum of the digit of the number is odd, then print the result, Do not use
 * "if".
 * example: 
 *    input: 95 output: 95   input:72 output: 67
 *
 * */

#include<stdio.h>
void main(){
int x,y;
printf("Enter the number: < 100");
scanf("%d",&x);
y=x;
x=((x%10)+(x/10))%2;
y-=(x*5);
printf("Result=%d",y);
return;

}
