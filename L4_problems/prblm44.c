/** ecen prlm -44
 * Get a string of numbers up to 50 digits and remove all leading zeros
 *eg : 00000000232435
  o/p : 232535
 * */
#include<stdio.h>
void main(){
char num[50],len=0;
printf("Enter the string of numbers:");
fgets(num,50,stdin);
while(!(num[len++]-'0'));
len--;
printf("Removed leading zero  string is %s",&num[len]);


}
