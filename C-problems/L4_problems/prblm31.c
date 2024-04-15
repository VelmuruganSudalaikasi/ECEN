/**ECEN prblm -31
 Print the number of zeroes you encounter between the number 9 to 1000
 **/

#include<stdio.h>

int main(){
int start=1,end=1000,noOfzeros,temp;

for(int i=start;i<end;i++){ //This loop iterating the range

temp=i;
while(temp){                 //This loop checking zeros in that number
 
if(!(temp%10)){
  noOfzeros++;
}
temp/=10;
}
}
printf("Total no of zero in the range %d to %d is = %d\n",start,end,noOfzeros)  ;
return 0;
}
