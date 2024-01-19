/**ECEN - 25
 * Program to print the sum of all Three digit Prime numbers
 **/

#include<stdio.h>
int main(){
int p_sum,i,flag;
int start=100,end=1000;

while(start < end){
i=2,flag=1;
while(i*i <= start){
if(!(start%i))
	flag=0;
i++;

}
if(flag) p_sum+=start;
start++;

}
printf("Sum of three  digit prime number is %d\n:",p_sum);

return 0;
}
