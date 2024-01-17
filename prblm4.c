/** Ecen prlm - 4 
 * Get the three digit number from the user and print the digit in Tens place position **/

#include<stdio.h>
int main(){
int x,y;
printf("Enter the three digit number :");
scanf("%d",&x);
y=(x/10)%10;
printf("The digit in Tens position is %d\n",y);
return 0;
}
