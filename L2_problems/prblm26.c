/*Write a program to print biggest 4-digit number which is divisible by
 * 7 and 9
 *
 * */
#include<stdio.h>
void main(){
int x=9999;
int rem=x%63; //lcm of 7 and 9
printf("biggest number=%d\n",x-rem);

}
