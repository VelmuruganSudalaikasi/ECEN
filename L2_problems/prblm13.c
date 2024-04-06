/*Write a program to get a number from user and print the reverse of that
 * number 
 * example: I: 123   O: 321
 *
 *
 * */

#include<stdio.h>
void main(){
int x;
printf("Enter the Number:");
scanf("%d",&x);
int rev=0;
while(x!=0){
int digit=(x%10);
		
rev=(rev*10)+(x%10);
x/=10;

}
printf("Reverse=%d",rev);

}
