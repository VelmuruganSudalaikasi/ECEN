/**ECEN - prblm 14
 * Write tht program to print the total number of single digit odd number 
 * Hint : single digit has 10 number 0..9 even follwed by odd so i would divide counts of number by / 2 **/

#include<stdio.h>
int main(){
int x=10,y;
if(x%2==0)
y=x/2;
else
y=(x+1)/2;
printf("No of odd digits in the single digit: %d\n",y);
return 0;
}
