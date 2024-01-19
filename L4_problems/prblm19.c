/**ECEN - prblm 19
 * Write tht program to print the sum of number of three  digit odd number 
 *Hint : Here im using the simple loop to sum the output **/

#include<stdio.h>
int main(){
int x,y,end=1000,start=111;
for(x=start;x<end;x+=2){
       printf("x=%d\n",x);       
	y+=x;
}
printf("The sum of all three digit number is %d\n :",y);
return 0;
}
