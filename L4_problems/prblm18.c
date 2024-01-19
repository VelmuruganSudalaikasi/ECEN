/**ECEN - prblm 18
 * Write tht program to print the sum of number of two  digit odd number 
 *Hint : Here im using the simple loop to sum the output **/

#include<stdio.h>
int main(){
int x,y,end=100,start=11;
for(x=start;x<end;x+=2){
y+=x;
}
printf("The sum of all two  digit number is %d\n :",y);
return 0;
}
