/**ECEN - prblm 17
 * Write tht program to print the sum of number of single digit odd number 
 *Hint : Here im using the simple loop to sum the output **/

#include<stdio.h>
int main(){
int x,y,end=10,start=1;
for(x=start;x<end;x+=2){
y+=x;
}
printf("The sum of all single digit number is %d\n :",y);
return 0;
}
