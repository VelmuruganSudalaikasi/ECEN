/* Get a tow 3- digit number from the user. Add the one's and hundred's digit of both the numbers. Print the sum of all digits of the number whose sum of one's and hundreds's digit is bigger.
 *
 * example :
 *    input : 856 978 outPut: 24
 *    input: 128 365 output: 11
 *
 *
 * */

#include<stdio.h>
void main(){
int x1,x2,y;
printf("Enter the First Number > 99 : ");
scanf("%d",&x1);
printf("Enter the Second Number > 99 : ");
scanf("%d",&x2);
int sum1,sum2;

sum1=(x1/100)+(x1%10);
sum2=(x2/100)+(x2%10);

if(sum1 >= sum2){
sum1+=((x1/10)%10);
printf("Result =%d",sum1);

}else{
sum2+=((x2/10)%10);
printf("Result = %d",sum2);

}



}
