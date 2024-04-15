/*L1 prblm
 *
 * Get a two-digit number from the user and pring the one's digit.
 *
 *
 * */


#include<stdio.h>
void main(){
int x,y;
printf("Enter the number:");
scanf("%d",&x);
y=x%10;
printf("RESULT=	%d",y);

}
