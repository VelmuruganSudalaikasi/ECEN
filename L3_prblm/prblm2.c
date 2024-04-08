/*
 *Get a number from user and subtract 5 to that number and print the result
 *write your code inside the function.Do not Changet the code.
 * 
 * input : 45 output : 40
 * input  : 2 output : -3
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
no2=no1-5;
return no2;

}
