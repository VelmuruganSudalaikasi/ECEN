/** Ecen prlm - 8 
 * Get the Four  digit number from the user and print the reverse of it **/

#include<stdio.h>
int main(){
int x,y;
printf("Enter the Four  digit number :");
scanf("%d",&x);
y=(x%10)*1000+((x%100)/10)*100+((x/100)%10)*10+x/1000;
printf("Reverse of the Entered nubmber is  %d\n",y);
return 0;
}
