/*Get a four-digit number from the user and  reverse first two digit of the number.
 * example:
 * input : 1233 output:2133
 *
 * */

#include<stdio.h>
void main(){
int x,y;
printf("Enter the Number > 999:");
scanf("%d",&x);
y=(x%100)+(x/1000)*100+(((x/100)%10)*1000);

printf("Result=%d\n",y);
}
