/** ECEN prblm-53
 * Get the string and count the no of words in the string
 * eg : Welcome to Zoho
 * o/p : 3
 * */

#include<stdio.h>
#include<string.h>
void main(){
char str[50],word_count;
printf("Enter the string:");
fgets(str,50,stdin);
char len=strlen(str)-1,begin=0;
while(begin < len){
if(str[begin]==' ' && str[begin+1]!=0){
word_count++;
}
begin++;
}
printf("%d",word_count+1);
}
