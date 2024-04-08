/*
 * Get two number from user and compare the numbers. if same print
 *"same" otherwise print "Not Same". Write your code inside the function.
 * 
 * input :123 123  output : same 
 * input : 123 44  output : Not same
 * */
#include<stdio.h>
int compare_numbers(int no1,int no2);
int main(){
  int number1,number2,result;
  scanf("%d",&number1);
  scanf("%d",&number2);
  result=compare_numbers(number1,number2);
  if(result==1)
	  printf("Same");
  else 
	  printf("Not Same");

}
int compare_numbers(int no1,int no2){
int result;
result=(no1==no2);
return result;
}
