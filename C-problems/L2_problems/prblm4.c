 /*write the loop program to print sum of 6 to 1
 *     21
 * */

#include<stdio.h>
void main(){
int x;
int res=0;
x=6;
loop: if(x > 0) {
      res=res+(x--); 
      goto loop;
      
      
      }
      printf("Result=%d",res);

}
