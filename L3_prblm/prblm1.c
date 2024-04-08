/*
 *Get a number from user and add 2 to that number and print the result
 *write your code inside the function.Do not Changet the code.
 * 
 * input : 45 output : 47
 * input  : 2 output :4
 *
 * */

#include<stdio.h>
int function(int);
int main(){
int number1,number2;
scanf("%d",&number1);
number2=function(number1);
printf("%d",number2);
return 0;
}
int function(int no1){
int no2;
no2=no1+2;
return no2;

}
