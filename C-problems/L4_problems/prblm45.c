/** Get a number up to 50 digit and reverse of it.
 * eg : 123456789
 * o/p: 987654321
 * */
#include<stdio.h>
#include<string.h>
void main(){
char num[50],begin=0,end;
printf("Enter the number :");
scanf("%s",num);
end=strlen(num)-1;
while(begin < end){

	num[begin]=num[begin] ^ num [end];
	num[end]^=num[begin];
	num[begin]^=num[end];
	begin++;end--;


}

printf("The reserved number is %s",num);
}

