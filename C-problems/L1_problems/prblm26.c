/*Get a two-digit number from user. if the sum of the digt is 10 then pint "Success" otherwise print "Failure";
 *Example:
input : 35 output: "failure" input:55 output: Scuess
 * */
#include<stdio.h>
void main(){
int x,y;
printf("Enter the number:");
scanf("%d",&x);
y=((x/10)+(x%10)==10);
if(y) printf("Success");
else printf("Failure");

	
return;
}
