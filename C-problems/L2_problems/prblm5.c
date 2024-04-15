/*Write a loop program to print odd numbers 1 to 9
 *  
 *  1
 *  3
 *  5
 *  7
 *  9
 *
 *
 *
 */
#include<stdio.h>
void main(){
int x;
x=1;
loop : if(x < 10){
       if(x%2==1) printf("%d\n",x);
       x++;
       goto loop;
       }

}
 
