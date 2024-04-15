/*Write program get number from user and print the total number single-dgit perfect square number in number.
 *input : 123456789 output: 3
  input : 9876531 output :2
 *
 * */

#include<stdio.h>
#include<stdlib.h>
void main(){
int x;
scanf("%d",&x);
int count=0;
while(x!=0){
int digit=abs(x%10);
for(int i=1;i*i <= digit;i++ ){
  if(i*i==digit){
  count++;
  }

}
x/=10;  

}
printf("count=%d",count);

}

