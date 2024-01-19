/** Ecen prlm - 3 
 * Get the three digit number from the user and print the digit in ones place position **/

#include<stdio.h>
int main(){
int x,y;
printf("Enter the three digit number :");
scanf("%d",&x);
y=x%10;
printf("The digit in one position is %d\n",y);
return 0;
}
