/*Write a program to get a number from user, print whether that number is prime, and sum of digit is equal to 14.
 *
 * input : 59 output: prime & sum of digit is 14.
 * input ; 77 output: Not prime, but sum of digits is 14.
 * input: 13  output: prime, but sum of digits is not 14.
 * */

#include<stdio.h>

void main(){
int x;
printf("Enter the number:");
scanf("%d",&x);
if(x==1 || x==0 || x==-1){ goto mark;}
for(int div=2;(div*div)<=x;div++){
 
	if(x%div==0){
     mark :printf("Not Prime,");
        goto sum;
	}

}
printf("Prime,");
sum:int sum=0; 
   while(x!=0){
   sum+=(x%10);
   x/=10;
   }
   if(sum==14) printf("but sum of digits is 14");
   else printf("but sum of digits is Not 14");


}
