/** Get an interger and print each digit as character
 * print one character on one line
 **/

#include<stdio.h>
void main(){
int num;
printf("Enter the number\n");
scanf("%d",&num);
while(num)
{
printf("%c\n",num%10+'0');
num/=10;

}

return;
}
