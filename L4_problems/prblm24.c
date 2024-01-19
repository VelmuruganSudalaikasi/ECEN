/**ECEN - 24
 * Program to print the sum of all TWO digit Prime numbers
 **/

#include<stdio.h>
int main(){
int p_sum,i,flag;
int start=10,end=100;

while(start < end){
i=2,flag=1;
while(i*i <= start){
if(!(start%i)){
	flag=0; break;}
i++;

}
if(flag) p_sum+=start;
start++;

}
printf("Sum of two digit prime number is %d\n:",p_sum);

return 0;
}
