/** Ecen prlm - 5
 
 * Get the three digit number from the user and print the digit in Hundred  place position **/

#include<stdio.h>
int main(){
int x,y;
printf("Enter the three digit number :");
scanf("%d",&x);
y=x/100;
printf("The digit in Hundred position is %d\n",y);
return 0;
}
