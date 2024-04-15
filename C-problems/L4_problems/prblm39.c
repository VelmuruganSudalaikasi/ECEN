/** ECEN prblm - 39
 * Get a number as string and pring the interger value of the string./**/

#include<stdio.h>
void main(){
char str[10];
printf("Enter the number :\n");
scanf("%s",str);

//Converting to int
int begin=-1;
int num=0;
while(str[++begin]){
num*=10;
num+=str[begin]-'0';
}
printf("Convered to interger %d\n ",num);

}
