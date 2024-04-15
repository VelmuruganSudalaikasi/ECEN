/*Get a four-digit number from user. if the sum of the ten's digt and 100's digit greater than 10 print "success" ,otherwise print "Failure"
 *Example:
input :1935 output: "Success" input:5555 outpu: "Failure"
 * */
#include<stdio.h>
void main(){
int x,y;
printf("Enter the number: < 1000: ");
scanf("%d",&x);
y=(((x%100)/10)+((x/100)%10) > 10);
if(y) printf("Success");
else printf("Failure");

	
return;
}
