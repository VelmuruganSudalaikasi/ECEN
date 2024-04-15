/*Write a loop program to print the two-digit even numbers, who's sum of digit are 6.
 * answer :
 *   24
 *   42
 *   60
 *
 * */

#include<stdio.h>
void main(){
int x;
x=10;
loop : if(x < 100){
       if(x%2==0){
       int digitsum=0;
       digitsum=(x/10)+(x%10);
       if(digitsum==6){
       printf("%d\n",x);
       }
       
       }
       x++;
       goto loop;
       }

}
