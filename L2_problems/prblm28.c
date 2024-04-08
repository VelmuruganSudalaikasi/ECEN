/*Write a program to get two numbers from user and print the lcm of
 * those numbers
 * gcd * lcm = n1 * n2;
 * 
 *
 * */

#include<stdio.h>
void main(){
int x,x1;
printf("Enter a  and b");
scanf("%d %d",&x,&x1);
int a=x,b=x1;
int product= x*x1;
//Gcd finding
while(x1 !=0 && x!=0){
int temp=x;	
x=(x1%x);
x1=temp;
}
printf("Lcm of %d and %d =%d \n",a,b,(product/(x1+x)));

}
