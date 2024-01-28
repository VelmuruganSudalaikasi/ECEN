/** ECEN prblm -35 
 * Get 2 numbers from user and find the LCM of them
 * eg : input 20,30 output:60
 * */

#include<stdio.h>
int gcdoftwonumber(int,int);
void main(){
int num1,num2;
printf("Enter the first number :");
scanf("%d",&num1);
printf("Enter the second number :");
scanf("%d",&num2);
//Im using Ecluidean method to slove this problem
// LCM=num1*num2/GCD
printf("gcd of two number is %d ",(num1*num2)/gcdoftwonumber(num1,num2));

}
// im using recursion to slove this problem
int gcdoftwonumber(int a,int b){
if(a ==0)
	return b;
if(b==0) return a;
gcdoftwonumber(b%a,a);


}
