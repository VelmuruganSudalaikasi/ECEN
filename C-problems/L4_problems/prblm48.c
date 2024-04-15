/** ECEN prblm-48
 * adjust the carry in an integer array (i.e convert the 2 digit number in to single digit and add the carry to the next number)
 * Eg: array 6 12 3 15 7
 * o/p:      7   2  4   5  7 
 * */

#include<stdio.h>
void main(){
int num[]={1,22,33,44,55,66};
int carry=0,i,len=sizeof(num)/sizeof(num[0]);
for(i=len-1;i>=0;i--){
if(num[i] > 9){
carry=num[i]/10;
num[i]=num[i]%10;
}

}
if(carry) num[0]+=carry;
i=0;
while(i < len)
printf("%d",num[i++]);}



