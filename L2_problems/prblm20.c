/*Write a program print total number of single digit prime number
 * answer 4
 *
 * */
#include<stdio.h>

void main(){
int count=0;
for(int x=2;x<=9;x++)
for(int div=2;(div*div)<=x;div++){

if(x%div==0){
count++;
break;
}

}
printf("count=%d",count);

}
