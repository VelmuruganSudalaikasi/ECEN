/*
 *Write a loop program to print 5 to 1 one by one
 *
 * */

#include<stdio.h>
void main(){
int x;
x=5;
loop: if(x > 0){
      printf("%d \n",x--);
      goto loop;
      
      }

}
