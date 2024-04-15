/*
 *Get a number from user and check whether the sum of digit is 14 and 
 *print the result. write your cde inside the function. Do not change the 
 * format.
 * input : 59 output: sum of digit is 14.
 * input : 123 output : sum of digit is not 14.
 * */
#include<stdio.h>
int sum14(int no);
int main(){
int number,result;
 scanf("%d",&number);
 result=sum14(number);
 if(result==1) 
	 printf("Sum of Digits is 14");
 else 
	 printf("Sum of Digits is not 14");
 return 0;

}
int sum14(int no){
  int result;
  int digitSum=0;
  while(no!=0){
  digitSum+=no%10;
  no/=10;
  }
  if(digitSum==14) result=1;
  else result=0;
  return result;
}
