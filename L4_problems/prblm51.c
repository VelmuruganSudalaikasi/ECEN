/** ECEN prblm-56
 * Get a string and a character from the user and find all the positions where the character and print it.
 * */

#include<stdio.h>
#include<string.h>
void main(){
char str[50],ch;
printf("Enter the string :");
fgets(str,50,stdin);
printf("Enter the char and get index of all position is given string:");
scanf("%c",&ch);
int begin=0,end=strlen(str)-1;
printf("\n");
while(begin < end){
if(ch == str[begin])
	printf("%d , ",begin+1);
if(ch==str[end])
	printf("%d ," ,end+1);
begin++;
end--;

}

}
