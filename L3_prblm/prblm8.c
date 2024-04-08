/*
 *Get a number from user and check whether the digits are in 
 * ascending order.
 *
 * input :  1234 output : yes 
 * input : 5687  ouput : No
 * */
#include<stdio.h>
int check_assending(int no);
int main(){
  int number,result;
  scanf("%d",&number);
  result=check_assending(number);
  if(result==1) printf("yes");
  else printf("No");


return 0;}
int check_assending(int no){
int result;
result=1;
  while(no/10){
   int prev=no%10;
   no/=10;
   if(prev < no%10 ){
	   result=0;
	   break;
   }

  }
  return result;

}
