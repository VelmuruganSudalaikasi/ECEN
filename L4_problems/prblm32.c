/** ECEN prblm-32
 * Total number of prime numbers below 1,000,000 have sum of their digits equal 14
 **/

#include<stdio.h>
 
void main(){
int divisor,flag,i;
for( i=2;i<100000;i++){
divisor=2,flag=1;
while(divisor * divisor <= i){
if(!(i % divisor)){
flag=0;
break;
}

divisor++;
}
if(flag){}
else continue;
//Checking the individual digits
int nums,sum=0;
nums=i;
while(nums){
sum+=nums%10;
nums/=10;


}
if(sum==14){

printf("sum of prime number digit %d  is equal to 14\n",i);
}

}


}



	
