/*Get two -3 digit number from user. Print the difference between the one's digit and hundred digit of the number whose ten's digit is bigger than the other number's ten's digit
 *
 * eg :
 *   input : 856 976 output : 1
 *   input :138 365  output : 2
 *
 *
 * */

#include<stdio.h>
#include<stdlib.h>
void main(){
int x1,x2,y;
printf("Enter First Number: > 99");
scanf("%d",&x1);
printf("Enter Second Number: > 99");
scanf("%d",&x2);
int f_ten,s_ten;
f_ten=((x1%100)/10);
s_ten=((x2%100)/10);

if(f_ten >= s_ten){
y=(x1/100)-(x1%10);

printf("Result=%d",abs(y));
}else{
y=(x2/100)-(x2%10);
printf("Result=%d",abs(y));

}




}
