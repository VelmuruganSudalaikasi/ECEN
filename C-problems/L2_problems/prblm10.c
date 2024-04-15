/*
 *Write loop program to print the sum of two-digit odd  numbers, whose ten's digit is 7

Eg :
     75+25+....95 output: 495
 * */

#include<stdio.h>
void main(){
int x;
x=70;
int sum=0;
loop:if(x < 80){
     if(x%2==1)
     sum+=x;
     x++;
     goto loop;
     }
    printf("sum=%d",sum);

}
