/** ECEN prblm -50
 * Get two numbers of up to 50 digits and perform addition and print the result;**/

#include<stdio.h>
#include<string.h>
int num1[50],num2[50];
int res[51],temp;
int strlen1,strlen2,carry=0;
void  strtonum(char *,int*);
void  adding(int*,int*,int*);
void main(){
char  str1[50],str2[50];

printf("Enter the first number up to 50 digit :\n");
scanf("%s",str1);
strlen1=strlen(str1)-1;

printf("Enter the second number up to 50 digit :\n");
scanf("%s",str2);
strlen2=strlen(str2)-1;

printf("The length of the string is str1= %d str=%d \n",strlen1,strlen2);
strtonum(str1,num1);
strtonum(str2,num2);
adding(num1,num2,res);


for(int i=0 ;i <= temp;i++)
	printf("%d",res[i]);


}

void adding(int* first,int* sec,int* res){
int max;
temp=max= (strlen1 > strlen2) ? strlen1 : strlen2;
max+=1;
while(strlen1 >= 0  && strlen2 >=0){
res[max]=first[strlen1]+sec[strlen2]+carry;
if(res[max] > 9){
carry=res[max]/10;
res[max]%=10;
}
strlen1--;
strlen2--;
max--;

}
if(carry){
res[max]=carry;
}
while(strlen1 >=0 ){
res[max]+=first[strlen1];
max--;
strlen1--;
}

while(strlen2 >=0){
res[max]+=sec[strlen2];
max--;
strlen2--;

}

if(!(res[0])){
	for(int i=0;i<=temp;i++){
	res[i]=res[i+1];
	}
	res[temp+1]=0;


}
}

void  strtonum(char *str,int* num){
int i=0;
while(str[i]){
num[i]=str[i]-'0';
i++;

}

}
