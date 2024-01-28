/** ECEN prblm -40
 * Get an Interger and print it as string
 * */

#include<stdio.h>
void main(){
int num;
printf("Enter the number:\n");
scanf("%d",&num);
//Convereted to string
int str[10];
int loop=0;
while(num){
str[loop++]=num%10;
num/=10;
}
for(loop=loop-1;loop>=0;loop--){
printf("%d",str[loop]);

}


}


