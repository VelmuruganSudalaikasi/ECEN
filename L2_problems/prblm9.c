/*
 *Write loop program to print the sum of two-digit numbers whose one's digit is 5

Eg :
     15+25+....95 output: 495
 * */

#include<stdio.h>
void main(){
int x;
x=15;
int sum=0;
loop:if(x < 100){
     
     sum+=x;
     x+=10;
     goto loop;
     }
    printf("sum=%d",sum);

}
