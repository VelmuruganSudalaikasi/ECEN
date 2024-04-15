/*Get a three - digit number from the user ad print sum of digits.
 *
 *input :591 output:15
 *
 * */

#include<stdio.h>
void main(){
int x,y;
printf("Enter the Number:");
scanf("%d",&x);
y=(x%10)+((x%100)/10)+(x/100);
printf("Result=%d",y);


}
