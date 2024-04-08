/*Write a program to get three numbers from user and print the lcm of
 * those numbers
 * gcd * lcm = n1 * n2;
 * 
 *
 * */

#include<stdio.h>
int gcd(int,int);
int lcm(int a,int b){
int product=(a*b);
int num=gcd(a,b);

return product/num;
}
int gcd(int a,int b){
if(a==0 || b==0)
	return a+b;
return gcd(b%a,a);

}

void main(){
int a,b,c;
printf("Enter the Number");
scanf("%d %d %d",&a,&b,&c);
printf ("%d",lcm(lcm(a,b),c));
}

