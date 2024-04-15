/*
 *Write a loop program to print sum of 1 to 5
 *
 * */

#include<stdio.h>
void main(){
int x;
x=1;
int sum=0;
loop : if(x < 6){
       sum+=x++;
       goto loop;
       }
       printf("%d",sum);

}
