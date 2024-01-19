/** Ecen prlm - 11 
 * Get the Number from the user and reverse of it **/

#include<stdio.h>
//int power(int,int);
int main(){int x,y;
printf("Enter the  number :");
scanf("%d",&x);
for(int i=0;x!=0;i++){

	y=y*10+(x%10);
	x=x/10;
}
printf("Reverse of the Entered nubmber is  %d\n",y);
return 0;
}
/**int power(int base,int exp){
int result=1;
	while(exp--){
        result*=10;
   
	}return result;

}**/
