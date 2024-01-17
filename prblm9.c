/** Ecen prlm - 9 
 * Get the Two   digit number from the user and the sum of all digit **/

#include<stdio.h>
int main(){
int x,y;
printf("Enter the Four  digit number :");
scanf("%d",&x);
while(x!=0){
y+=x%10;
x=x/10;
}
printf("Sum of the Entered nubmber is  %d\n",y);
return 0;
}
