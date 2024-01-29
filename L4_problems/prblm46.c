/** ECEN prblm-46
 * Get a number string up to 50 digits and convert it to integer array.
 * */
#include<stdio.h>
#include<string.h>
void main(){

int num[50],begin=0,end;
char ch[50];
printf("Enter the number:");
scanf("%s",ch);
//Convert to int array
printf("Convert to int array:");
end=strlen(ch);
while(begin < end){
 num[begin]=ch[begin]-'0';
 printf("%d",num[begin++]);

}

}
