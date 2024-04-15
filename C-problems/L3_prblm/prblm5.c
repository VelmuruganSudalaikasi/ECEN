/*Get a number from user and count the number of zeros in that number and
 * print. Write your code the function. Do not change the format.
 *  input : 100 output: 2 
 *  input : 1060030 output : 4
 * */

#include<stdio.h>
int find_no_zeros(int no);
int main(){
int number,result;
scanf("%d",&number);
result=find_no_zeros(number);
printf("%d",result);
return 0;

}

int find_no_zeros(int no){

int result;
result=0;
while(no != 0){
int digit=no%10;
if(digit==0) result++;
no/=10;
}
return result;

}
