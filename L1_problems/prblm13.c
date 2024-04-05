/*Get a two-digit number from the user and pring the reverse of it.
 * example:
 * input : 12 output:21
 *
 * */

#include<stdio.h>
void main(){
int x,y;
printf("Enter the Number:");
scanf("%d",&x);
if(x > 9){
y=(x/10)+((x%10)*10);
printf("Result=%d\n",y);
}
printf("Result=%d",x);
}
