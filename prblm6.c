/** Ecen prlm - 6 
 * Get the two  digit number from the user and print the reverse of it **/

#include<stdio.h>
int main(){
int x,y;
printf("Enter the two  digit number :");
scanf("%d",&x);
y=(x%10)*10+(x/10);
printf("Reverse of the Entered nubmber is  %d\n",y);
return 0;
}
