/*Get the number from the user and subtract 5 from that numbre if the numbers ten's position digits is odd, then print the result. Do not use "if".
 * example: input:672 output: 667
 *
 * */
#include<stdio.h>
void main(){
int x,y;
printf("Enter the number:");
scanf("%d",&x);
y=x;
x=((x%100)/10)%2;
y-=(x*5);
printf("Result=%d",y);


return;
}
