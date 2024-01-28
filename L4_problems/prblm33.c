/**ECEN prblm -33
/Print the total number of non-decreasing number from 1000 to 9999.Non decreasing numbers have individual digits that do not have decreasing order left to right.
eg : 1234 is non-decreasing order where as 2134 is not
**/
#include<stdio.h>
void main(){
int begin=1000,end=9999;

while(begin++ <= end){
int fst,sec,rd,th;
fst=begin%10;
sec=(begin/10)%10;
rd=(begin/100)%10;
th=(begin/1000)%10;
if(fst < sec && sec < rd && rd <th){
printf("The number %d is followed the non decreasing order \n",begin);
}


}

}
