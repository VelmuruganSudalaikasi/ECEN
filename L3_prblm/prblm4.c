/*
 *Get a number from user and check prime or not and print the result.
 *Write your code inside the function. Do not change the format.
 * 
 *input : 61 output: Number is prime 
 *input : 55 output : Number is not prime. 
 *
 * */
#include<stdio.h>
int isPrime(int no);
int main(){
int number,result;
scanf("%d",&number);
result=isPrime(number);
if(result==1)
	printf("Number is Prime");
else 
	printf("Number is not Prime");
return 0;

}
int isPrime(int no){
  int result;
  int flag=1;
  for(int div=2;(div*div)<=no;div++ ){
  if(no%div==0) {
  flag=0;
  break;
  }
  
  }
  result=flag;
  return result;

 
}
