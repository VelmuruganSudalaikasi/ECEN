/*Get two -2 digit number form user. Print the sum of digits of the biggest number.
 *Ex :
 input : 56 78 output: 15
 input : 14 65 output : 11 
 *
 * */

#include<stdio.h>
void main(){

int x1,x2,y;
printf("Enter First Number  < 100:");
scanf("%d",&x1);
printf("Enter Second number <100 :");
scanf("%d",&x2);
int sum=0;
if(x1 > x2){
sum=(x1/10);
sum+=(x1%10);
printf("%d",sum);
	
}
else{
sum=(x2/10);
sum+=(x2%10);
printf("%d",sum);


}

}
