/** ECEN prblm-34
 * Print the total number of all palindrome numbers less than 100000
 * eg : 101,12321,656,99899,11511
 * */

#include<stdio.h>
void main(){
int num,temp,total=0;
int begin=10, end =100000;

while(begin < end){
temp=begin,num=0;
while(temp){	
num=num*10;
num+=(temp%10);
temp/=10;

}

if(num==begin) total++;begin++;

}
printf("Total number of palindrome number less than 1000000 %d ",total);
}
