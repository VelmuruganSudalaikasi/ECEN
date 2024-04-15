/*Get two 2-digit number from the user. If the sum of the number is less than 100, then print the sum, otherwise print the difference.
 *
 * eg :
 *     input : 65 40 -output : 25
 *     input : 10 20 output : 30
 *
 *
 * */

#include<stdio.h>
#include<stdlib.h>
void main(){
int x1,x2,y;
printf("Enter First Number:");
scanf("%d",&x1);
printf("Enter Secod Number");
scanf("%d",&x2);

y=x1+x2;
if(y < 100) printf("Result=%d",y);
else printf("Result=%d",abs(x1-x2));



}
