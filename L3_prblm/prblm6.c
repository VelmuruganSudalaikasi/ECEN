/* Get a number from user and reverse that number and print. Write your
 * code inside the function. Do not change the format.
 *  
 *   input : 123 output : 321
 *   input : 56789 output : 98765 
 *
 * */
#include<stdio.h>
int reverse_number(int no);
int  main(){
int number,result;
scanf("%d",&number);
result=reverse_number(number);
printf("%d",result);
return 0;

}
int reverse_number(int no){
 int result;
 result=0;
 while(no!=0){
  result=(result*10)+(no%10);
  no/=10;
 }
  
 return result;
}
