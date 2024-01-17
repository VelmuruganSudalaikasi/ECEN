/**ECEN prblm: 1  
 * Problem statement : Get the three digit number from the usert and print the digit in one's places position
 * exaxmple ; User enters : "738"
 * Answer : 8 **/
 
#include <stdio.h>
void main(){
int x,y;
printf("Enter the three digit Number :");
scanf("%d",&x);
y=x%10;
printf("The digit in ones position is %d\n",y);
return ;
}



