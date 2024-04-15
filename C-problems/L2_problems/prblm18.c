/* Write a program to get number from user, print whether that number's
 *first two digit (ten's digits and one's digit) is prime.
 * ex :
 *    input : 359 output: Prime
 *    input : 3577 output: not a prime
 *
 * */
#include<stdio.h>
#include<stdlib.h>
void main(){
int x;
printf("Enter the Number:");
scanf("%d",&x);
if(x==0 || x==1 || x==-1) goto mark;
x=abs(x);
x=x%100;
for(int div=2;(div*div) <= x;div++){
   if(x%div==0){
mark: printf("Not a prime");
      return;
   }

}
printf("Prime");

}
