/*Get a three digit number from user and make the ones's digit as 2, then print it.
 * Example:
 *   input:840 output:842
 *
 *
 * */
#include<stdio.h>
void main(){
int x,y;
printf("Enter the number > 100:");
scanf("%d",&x);

y=(x/10)*10+2;
printf("Result = %d \n",y);

}
