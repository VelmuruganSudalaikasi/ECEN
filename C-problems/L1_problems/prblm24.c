/*Get a three-digit number from user and subtract 5 from that number if one's digit number and 100's digit number are same, then print the result.
 * Do not use "if".
 * input: 595 output:590
 * */
#include<stdio.h>
void main(){
int x,y;
printf("Enter the number > 99:");
scanf("%d",&x);
y=x;
x=((x%10)==(x/100));
y-=(x*5);
printf("Result:%d",y);
	
return;
}
