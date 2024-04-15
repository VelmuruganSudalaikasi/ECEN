/** ECEN prlm -2 
 * Get the Two digit number from th user and print the digit in Tens  position **/
#include<stdio.h>
int main(){
	int x,y;
	printf("Enter the Two digit number ");
	scanf("%d",&x);
	y=x/10;
	printf("The digit in Tens position is: %d\n ",y);
	return 0;
}
