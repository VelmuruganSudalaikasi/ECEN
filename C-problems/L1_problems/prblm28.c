/*Get a three-digit number from user. if the sum of the one's digt and 100's digit less than 10 print "success" ,otherwise print "Failure"
 *Example:
input :135 output: "Success" input:555 outpu: "Failure"
 * */
#include<stdio.h>
void main(){
int x,y;
printf("Enter the number: < 100: ");
scanf("%d",&x);
y=(((x/100)+(x%10)) <  10);
if(y) printf("Success");
else printf("Failure");

	
return;
}
