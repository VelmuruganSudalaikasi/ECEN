/* L1 prblm-ECEN
Get a two - digit number from the user ad print sum of digits.
 *
 *input :59 output:14
 *
 * */

#include<stdio.h>
void main(){
int x,y;
printf("Enter the Number:");
scanf("%d",&x);
y=(x/10)+(x%10);
printf("Result=%d",y);


}
