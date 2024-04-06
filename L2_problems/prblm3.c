 /*write the loop program to print sum of 1 to 5
 *     15
 * */

#include<stdio.h>
void main(){
int x;
int res=0;
x=1;
loop: if(x < 6) {
      res=res+(x++); 
      goto loop;
      
      
      }
      printf("Result=%d",res);

}
