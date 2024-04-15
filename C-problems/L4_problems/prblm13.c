/** Ecen prlm - 13 
 * Get the number from the user and print the sum of all digits **/

#include<stdio.h>
int main(){
int x,y;
printf("Enter the  number :");
scanf("%d",&x);
while(x!=0){
y+=x%10;
x=x/10;
}
printf("Sum of the Entered nubmber is  %d\n",y);
return 0;
}
