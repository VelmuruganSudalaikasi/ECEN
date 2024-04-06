/*
 * */

#include<stdio.h>
#include<math.h>
void main(){
int x;
printf("Enter the Number:");
scanf("%d",&x);

int lastDigit=x%10;
x/=10;
int count=pow(10,((int)(log(x)/log(10))));
int firstDigit=(x/(count));
x=(x%(count));
x=x+(lastDigit*count);
x=(x*10)+firstDigit;
printf("Result=%d",x);

}
