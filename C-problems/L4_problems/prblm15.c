/**ECEN - prblm 15
 * Write tht program to print the total number of single digit odd number 
 * Hint : two  digit has 90 number 10..99 even follwed by odd so i would divide counts of number by / 2 **/

#include<stdio.h>
int main(){
int x=90,y;
if(x%2==0)
y=x/2;
else
y=(x+1)/2;
printf("No of odd digits in the two digit: %d\n",y);
return 0;
}
