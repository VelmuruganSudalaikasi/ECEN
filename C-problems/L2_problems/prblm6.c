/*
 * Write a loop program to print the two-digit odd numbers, below 20.
 * ans:
 *     11
 *     13
 *     15
 *     17
 *     19
 *
 *
 * */
#include<stdio.h>
void main(){
int x;
x=1;
loop:if(x < 10){
if(x%2==1) printf("%d\n",x+10);
x++;
goto loop;

}


}
