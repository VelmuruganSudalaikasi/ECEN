/*Write program get number from user and print the total number two-dgit perfect square number in number.
 *input : 163496481 output: 4
  input : 364925 output :4
 *
 * */

#include<stdio.h>
#include<stdlib.h>
void main(){
int x;
scanf("%d",&x);
int count=0;
x=abs(x);
while(x > 9 ){
int digit=x%100;
for(int i=4;i*i <= digit;i++ ){
  if(i*i==digit){
  count++;
  }

}
x/=10;  

}
printf("count=%d",count);

}

