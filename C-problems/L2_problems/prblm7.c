/*Write a loop program to print the two-digit odd numbers, who's sum of digit are 7.
 * answer :
 *   25
 *   43
 *   61
 *
 * */

#include<stdio.h>
void main(){
int x;
x=10;
loop : if(x < 100){
       if(x%2==1){
       int digitsum=0;
       digitsum=(x/10)+(x%10);
       if(digitsum==7){
       printf("%d\n",x);
       }
       
       }
       x++;
       goto loop;
       }

}
