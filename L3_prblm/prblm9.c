/*
 *Get a two-digit number form user swap the digits
 * 
 *input : 34 output : 56
 * input : 56 output : 65
 *
 * */
#include<stdio.h>
#include<stdlib.h>
int swap_digits(int no);
int main(){
 int number,result;
 printf("Enter two-digit number");
 scanf("%d",&number);
 result=swap_digits(number);
 printf("%d",result);
 return 0;

}
int swap_digits(int no){
int result;
 int first=no%10;
 int second=no/10;
 result=no+((first-second)*9);
return result;

}
