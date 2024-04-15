/*
 *Write a program create a queue using linked list. use add & remove,add 
 * will insert the entry in top of the list. Remove will get bottom of th
 * list and display. Display will show from top to bottom.
 *
 * Menu items:
 *   1.Add
 *   2.Remove
 *   3.Display Queue
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
obj* lst_head=NULL,*lst_tail=NULL;
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

void add(obj* node){
  if(lst_head==NULL){
     lst_tail=node;
     lst_head=node;
     return;
  }
  lst_tail->next=node;
  lst_tail=node;
 

}

int remove_Q(){
 obj* iter=lst_head;
 obj* temp=NULL;
 if(iter==NULL){ 
	 printf("Queue is empty!\n");
        return -1;	
 }
 else if(lst_head==lst_tail){
    lst_head=NULL; 
    lst_tail=NULL;
  
 }
 else{
    lst_head=lst_head->next;
    

 }
   iter->next=NULL; 
  temp=iter;
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
  add(stud);
}
int choice;
printf("--------Queue Stack using linked list---------\n");
while(flag){
printf("Menu items\n");
printf("1.add\n");
printf("2.remove\n");
printf("3.display\n");
printf("4.Exit\n");

scanf("%*c %d",&choice);

switch(choice){
     case 1:
	     node=getNode();
	     add(node);
	     break;
     case 2:
            printf("removed item id=%d \n",remove_Q());
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
