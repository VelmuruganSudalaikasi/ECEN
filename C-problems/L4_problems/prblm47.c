/** ECEN prblm -47
 * Add two integer arrays of up to 50 digits and store the result in a 51 array.
 * */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
int num1[50],num2[50],res[51];
for(int i=0;i<50;i++) num1[i]=num2[i]=9;

int carry,sum;
for(int i=49;i>=0;i--){
sum=num1[i]+num2[i]+carry;
if(sum > 9){
carry=sum/10;
sum%=10;
}
res[i+1]=sum;

}
res[0]=carry;
//if(!(res)[0]) memset(res,res[0],50);
//printf("The lenth of the result array %ld:",sizeof(res)/sizeof(res[0]));
for(int i=0;i<=50;i++){
printf("%d",res[i]);
}



}
