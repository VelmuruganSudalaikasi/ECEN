/*Get a two digit number from user and make the one's digit as 0, then print it.
 * input: 95 output:90
 *
 * */

#include<stdio.h>
void main(){
int x,y;
printf("Enter the number < 100:");
scanf("%d",&x);
y=(x/10)*10;
printf("Result=%d\n",y);
}
