/** ECEN prblm - 49
 * Convert an integer array of up to 50 digits to character array and print using print using "printf("%s",....)
 * Eg : 1 4 5 6 7 8 9 
 * o/p : 1456789
 *
 * */

#include<stdio.h>
void main(){
char res[50];
int num[]={2,3,5,7,3,1,5,7,9,0,5,3,1,5,8,6,4,7,9,6,4};
//int to char
int len=sizeof(num)/sizeof(num[1]);
printf("%d",num[0]);
int i=0;
while(i < len){

res[i]= num[i]+'0';
i++;

}
res[i]='\0';
//for(int i=0;i<50;i++)
printf("%s",res);


}
