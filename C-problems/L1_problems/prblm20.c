/*Get a three digit number from user and make the ten's digit as 0, then print it.
 * Example:
 *   input:840 output:800
 *
 *
 * */
#include<stdio.h>
void main(){
int x,y;
printf("Enter the number > 100:");
scanf("%d",&x);
y=(x%10)+(x/100)*100;
printf("Result = %d \n",y);

}
