/*
 * simple calculator it takes 50 digit input perform +,-,/,% 
 * */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
char symbol,sign=0;
void getInput(char a[],char b[],char oper[]){
char invalid;
char num[10];
int len;

printf("cal>");
scanf("%[+-]",oper); 
printf("symbolOperation: %s",oper);
scanf("%[0-9]",a);   
printf("first num=%s",a);
 len=strlen(oper);
printf("lensymbol=%d",len);
scanf("%1[+-*/]",&symbol);
printf("symbol is : %c",symbol);
scanf("%[+-]",(oper+len));
scanf("%[0-9]",b);
printf("Seconddigit=%s",b);
printf("2ndsymbolOperation**: %s",(oper+len));
invalid+=scanf("%9[^\n]",num);

if(invalid)
{
 	
 printf("invalidinput");
 printf("\n");
 return;
 
 
 	
}
printf("\n");
}


char getOperation(char *p){
  
 while(*p){ 
   char cur=*p;	 
   if(cur=='-'){
      sign=-1; 	    
   }
  p++;
 }
 return symbol;

}
void add(char a[],char b[],char result[]){
int len_a=strlen(a)-1;
int len_b=strlen(b)-1;




}

void main(){
char a[20],b[20],oper[10];	
char result[105];
memset(result,0,sizeof(result));
bool flag=true;
  fflush(stdin);
  getInput(a,b,oper);
  char opercode=getOperation(oper);
  printf("opcode=%c",opercode);
  switch(opercode){
   case '+': add(a,b,result);
	   for(int i=0;i<105;i++)
		   printf("%d ",result[i]);
	   break;
   default:
         break;	   
  
  }
  	
}

