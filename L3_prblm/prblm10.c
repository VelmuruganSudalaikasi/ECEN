/*
 * Get a number from users, find the number of digits and print the same.
 *  ex:
 *    input : 3457 output: 4
 *    input : 123 output : 3
 *
 * */
#include<stdio.h>
#include<math.h>
int count_digits(int no);
int main(){
 int number,result;
 scanf("%d",&number);
 result=count_digits(number);
 printf("%d",result);
 return 0;

}
int count_digits(int no){
  int result;
   result=(log(no)/log(10))+1;
   return result;

}
