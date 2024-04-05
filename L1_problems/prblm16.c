/*Get a four-digit number from the user and  reverse last two digit of the number.
 * example:
 * input : 1231 output:1213
 *
 * */

#include<stdio.h>
void main(){
int x,y;
printf("Enter the Number > 999:");
scanf("%d",&x);
y=(x/100)*100+((x%10)*10)+((x%100)/10);
printf("Result=%d\n",y);
}
