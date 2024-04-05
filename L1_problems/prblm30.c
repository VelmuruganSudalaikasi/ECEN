/*Get a four-digit number from user. if the sum of the ten's digt and 100's digit is equal to 10 and one of the digit  is more than 10 print "success" ,otherwise print "Failure"
 *Example:
input :1935 output: "Success" input:5555 outpu: "Failure"
 * */
#include<stdio.h>
void main(){
int x,y;
printf("Enter the number: < 1000: ");
scanf("%d",&x);
int hred,ten;
ten=(x%100)/10;
hred=(x/100)%10;
y=(ten > 7 || hred> 7 );

if(y &&((ten+hred)==10)){
       
	printf("Success"); 
}
else printf("Failure");

	
return;
}
