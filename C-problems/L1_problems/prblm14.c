/*Get a three-digit number from the user and pring the reverse of it.
 * example:
 * input : 12 output:21
 *
 * */

#include<stdio.h>
void main(){
int x,y;
printf("Enter the Number > 99:");
scanf("%d",&x);
y=((x%10)*100)+(((x/10)%10)*10)+(x/100);
printf("Result=%d\n",y);
}
