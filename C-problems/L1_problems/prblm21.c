/*Get a number form user and subtract 5 form tat number if the number is oodd, then print the result.Do not use if.
 *
 * input : 695 output: 690
 *
 * */
#include<stdio.h>
void main(){
int x,y;
printf("Enter the number:");
scanf("%d",&x);
y=x;
x=x%2; // x=1 means odd, x=0 means even;
y-=(x*5);
printf("Result=%d",y);

return;
}
