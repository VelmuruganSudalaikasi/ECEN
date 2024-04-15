/*Write a program get number from user and print whether that number is pr	prime or not.
 * example :
 *      input : 31 output: not prime nmuber
 *
 * */
#include<stdio.h>
#include<stdlib.h>
void main(){
int x;
printf("Enter the program:");
scanf("%d",&x);

if(x == 1 || x==0 || x==-1) goto mark;

x=abs(x);

for(int div=2;(div*div) <= x;div++){
 
if(x%div==0){
    mark: printf("Not prime Number");
    return;
}


}
 printf("prime Number");

}
