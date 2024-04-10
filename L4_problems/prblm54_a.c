/*
 * Write a program to mulitply up to two 50 digit number.
 *
 * */


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int anslen=0,sign=1;
char iend=0,jend=0;

int signature(char a){
   
 if(a == '+' || a=='-')	
 { 
  if(a=='-') sign*=-1; 
 return 1;
 }
 return 0;

}


void toString(char ans[]){
for(int i=0;i<anslen-1;i++){
  ans[i]=ans[i]+'0';
}
int pos=0;
while(ans[pos]=='0'){
pos++;
}

if(sign==-1) {
    pos=pos-1;
   ans[pos]='-';
}
printf("Product of Entered Number is : ");
puts(ans+pos);


}

void twoSum(char a[],char b[],char ans[]){
  
  for(int i=strlen(a)-1;i>=iend;i--){
  
   for(int j=strlen(b)-1;j>=jend;j--){
         int index=i+j+2-iend-jend;
	  ans[index]+=(a[i]-'0') * (b[j]-'0');
	  ans[index-1]+=(ans[index]/10);
	  ans[index]%=10;

   }	  
   
  }	
   
 toString(ans); 	

}
int main(){
 char a[52],b[52];
 
 printf("Enter 50 digit Number:");
 scanf("%s",a);
 
 printf("Enter 50 digit Number:");
 scanf("%s",b);
 
  iend=signature(a[0]);
  jend=signature(b[0]);
  anslen=strlen(a)+strlen(b)+2-iend-jend;
  char ans[anslen];
  memset(ans,0,sizeof ans);
  twoSum(a,b,ans); 

}
