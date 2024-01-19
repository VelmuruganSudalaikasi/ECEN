/** ECEN -20
 * write the program to print the total number of single digit prime nnumber assume 0 & 1 are not primes
 **/
#include<stdio.h>
#define MAX 9
int main(){
int count=0,start,flag;

for(int r=2;r<=MAX;r++){ //Outer loop for range

start=2,flag=1;	// Assume flag is true

while(start*start <= r){

if(!(r%start)){

 flag=0;
 break;
}
start++;

}
if(flag) count++;

}

printf("Count of prime number between range is %d\n:",count);
return 0;

}
