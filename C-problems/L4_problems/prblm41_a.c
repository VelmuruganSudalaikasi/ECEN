/** same 41 pbrlm different method
 * */

#include<stdio.h>
void main(){
int num1,num2=0;
printf("enter the number\n");
scanf("%d",&num1);
while(num1){

num2=(num2*10)+(num1%10);
num1/=10;


}

while(num2){
printf("%c\n",((num2%10)+'0'));
num2/=10;

}
return;
}
