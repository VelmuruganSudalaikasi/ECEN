/*L1 prblm-ECEN
 *
 * Get a three-digit number from the user and print the ten's digit.
 *
 *
 * */


#include<stdio.h>
void main(){
int x,y;
printf("Enter the number:");
scanf("%d",&x);
y=x%100;
printf("RESULT=	%d",y/10);

}
