/** ECEN prblm-52
 * Get a main string and sub string check the sub string in main string an prit the position 
 * eg : string : hellosurabee
 *      substring: sura
 *      */

#include<stdio.h>
#include<string.h>
void main(){
char str[50],sub[49],temp;
printf("Enter the string:");
fgets(str,50,stdin);
printf("Enter the subtring:");
fgets(sub,49,stdin);
char len1=strlen(str)-1,len2=strlen(sub)-1;
for(int i=0;i<len1;i++){
temp=i;
for(int j=0;j<len2;j++){
if(str[temp] == sub[j]){
if(j==len2-1)
	printf("%d",temp-len2+2);
temp++;
}
else{
j=0;
temp=i;
break;
}
}

}

}
