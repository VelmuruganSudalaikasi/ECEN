/*write a loop program to print 5 to 1 on one by one
 * ans  :
 *     5
 *     4
 *     3
 *     2
 *     1
 *
 * */

#include<stdio.h>
void main(){
int x;
x=5;
loop: if(x > 0) {
      printf("%d\n",x--);
      goto loop;
      
      
      }

}
