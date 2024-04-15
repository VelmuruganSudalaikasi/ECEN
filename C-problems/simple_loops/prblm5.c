/*
 *
 *write a loop program to print odd numbers 1 to 9
 *
 * */
#include<stdio.h>

void main(){
int x;
x=1;
loop: if(x < 10){
      printf("%d \n",x);
      x+=2;
      goto loop;
      
      }


}
