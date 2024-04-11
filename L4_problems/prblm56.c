/*
 *create a link list for the following structure and get user input of 
 * id,maths mark, science mark, Once the user inputs id as -1 exit the input mode and display all the entries
 * 
 * ----------------Hint-------------------
 *  struct student{
 *      int id;
 *      int Maths;
 *      int Science;
 *      struct student* next;
 *
 *  }
 *
 * */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct student{
 int id;
 int Maths;
 int Science;
 struct student* next;

}obj;

void printList(obj* lst){
  printf("------Student Records----------\n\n");
 while(lst){
  printf("student_id   : %d \n",lst->id);
  printf("Maths_mark   : %d \n",lst->Maths);
  printf("Science_mark : %d \n",lst->Science);
  printf("----\n");
  lst=lst->next;
 
 }
 printf("-------------End------------");
  
  
  	


}

void main(){
bool flag=true;
obj* lst_head=0,*prev=0;

while(flag){
 int id;

 printf("Enter id :");
 scanf("%d",&id);

 if(id==-1){
 flag=false;
 printList(lst_head);
 free(lst_head);
 break;
 }
 
 obj* stud=malloc(sizeof(obj));
 if(!(lst_head)){
 
    lst_head=stud;
 }

 stud->id=id;

 printf("Maths mark:");
 scanf("%d",&(stud->Maths));

 printf("Science mark:");
 scanf("%d",&((stud->Science)));

 if(!(prev)) {
 prev=stud;
 }else{
 
 prev->next=stud;
 prev=stud;
 
}
stud->next=0;

 


}

}
