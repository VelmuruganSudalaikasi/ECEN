/*write a loop program to print 1 to 5 on one by one
 * ans  :
 *   1
 *   2
 *   3
 *   4
 *   5
 *
 * */

#include<stdio.h>
void main(){
int x;
x=1;
loop: if(x < 6) {
      printf("%d\n",x++);
      goto loop;
      
      
      }

}
