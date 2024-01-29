/** ECEN prblm-43
 * Get a String of numbers up to 50 digits and validatee the number 
 *
 * eg : 12345677 -> valid number
 *      3483948ggf -> invalid number
 * */

#include<stdio.h>
#include<string.h>
void main(){
char num[50],len,flag,ch;

printf("Enter the number:\n");
fgets(num,50,stdin);
len=strlen(num);
flag=1;
len--;
if(!(len)) return;
while(--len != -1)
{
ch = num[len];
if(!(ch >='0' && ch <= '9')){
flag=0; 
break;
}

}
if(flag==1){
	printf("valid number => %s",num);}
else{
        printf("invalid number => %s",num);}

}
