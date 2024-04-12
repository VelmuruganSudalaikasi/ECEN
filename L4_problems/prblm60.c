/*
 *Write a program create a stack using linked list. use push & pop, push
 *will insert the entry in top of the list. Pp will get top of the list
 * and display. Display will show from top to bottom.
 *
 * Menu items:
 *   1.Push
 *   2.Pop
 *   3.Display Stack
 *   4.Exit
 * 
 *
 * */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
typedef struct student{
  int id;
  int Maths;
  int Science;
  struct student *next;
	
}obj;
obj* lst_head=NULL;
void printList(obj* lst){
  printf("------Student Records----------\n\n");
 while(lst){
  printf("student_id   : %d \n",lst->id);
  printf("Maths_mark   : %d \n",lst->Maths);
  printf("Science_mark : %d \n",lst->Science);
  printf("----\n");
  lst=lst->next;

 }
 printf("-------------End------------\n\n");





}

obj* getNode(){

 obj* stud=malloc(sizeof(obj));


 printf("Enter id:");
 scanf("%d",&(stud->id));

 printf("Maths mark:");
 scanf("%d",&(stud->Maths));

 printf("Science mark:");
 scanf("%d",&((stud->Science)));

 stud->next=NULL;

 return  stud;


}

void push(obj* node){

 node->next=lst_head;
 lst_head=node; 
 

}

int pop(){
 if(lst_head==NULL){
	 printf("Stack is Empty!\n");
	 return -1;
 
 }
 obj* temp=lst_head;
 lst_head=lst_head->next;
 int val=temp->id;
 free(temp);
 return val;
 
}

void main(){
bool flag=1;
obj* node=0;
for(int i=1;i<5;i++){
   obj* stud=malloc(sizeof(obj));
  stud->id=i;
  stud->Maths=i*10;
  stud->Science=stud->Maths*10;
  push(stud);
}
int choice;
printf("--------Implemented Stack using linked list---------\n");
while(flag){
printf("Menu items\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("4.Exit\n");

scanf("%*c %d",&choice);


switch(choice){
     case 1:
	     node=getNode();
	     push(node);
	     break;
     case 2:
            printf(" poped item is=%d \n",pop());
	    break;
     case 3:
           printList(lst_head);
            break;
     case 4:
          flag=false;
           break;	  
                 
     default:
           printf("Enter the valid option from the menu");
            break;	   


}



}

free(lst_head);
}
