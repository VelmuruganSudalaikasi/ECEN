/*Get a three-digit number form user. if the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum. if the sum of the digit si less than 10, the print the sum, otherwise add the digits of the sum, and pring the sum.
 * note: The result should be always single digit only.
 * eg :
 *  input 123 out: 6
 *  input 991 out : 1 (9+9+1)=>1+9=1+0=1
 *
 * */
#include<stdio.h>
void main(){
int x,y;
printf("Enter Number:");
scanf("%d",&x);

//Core
while(y==0 || y > 9){
y=0;
	
while(x != 0){

y+=(x%10);
x/=10;

}
x=y;


}
printf("Result=%d",y);

}



