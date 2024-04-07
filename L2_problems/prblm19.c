/* Write a program to get  four digit number from  user, print whether that number's
 *middle two digit (hundred's digits and tens's digit) is prime.
 * ex :
 *    input :6359 output: Prime
 *    input : 3577 output: not a prime
 *
 * */
#include<stdio.h>
#include<stdlib.h>
void main(){
int x;
printf("Enter the Number > 999:");
scanf("%d",&x);
x=abs(x);
x=x/10;
x=x%100;
for(int div=2;(div*div) <= x;div++){
   if(x%div==0){
    printf("Not a prime");
      return;
   }

}
printf("Prime");

}
