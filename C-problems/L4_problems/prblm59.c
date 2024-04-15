/*Question: Create a doubly linked list with about 5 entries using the following
structure. Insert a new entry before or after a given id. Delete an
entry of a given id.
Menu Items
1. Insert Entry
2. Delete Entry
3. Display List
4. Exit
struct student {
struct student *prev;
int id;
int Maths;
int Science;
struct student *next;
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct student{
int id;
int Maths;
int Science;
struct student* prev;
struct student* next;

}obj;
obj* lst_head=0,*lst_tail=0;

obj* getNode(){

   obj* node=malloc(sizeof(obj));
   node->next=NULL;
   node->prev=NULL; 
	
  printf("Enter the id: \n");
  scanf("%d",&(node->id));

  printf("Science marks: \n");
  scanf("%d",&(node->Maths));

  printf("Maths marks: \n");
  scanf("%d",&(node->Science));

  return node;


}

void insertBeg(obj* node){
 if(lst_head==NULL){
lst_tail=node;
lst_head=node;
return;
 }
  node->next=lst_head;
  lst_head->prev=node;
  lst_head=node;
  

}
void insertLast(obj* node){
  node->prev=lst_tail;
  lst_tail->next=node;

  lst_tail=node;

}



void printList(obj* head) {
      
    printf("--------------forward order---------- \n\n ");	
    printf("------Student Records----------\n\n");
    if(head==NULL)
    printf("***********List is Empty*********\n\n");
    obj* current = head;
    while (current) {
        printf("student_id   : %d \n", current->id);
        printf("Maths_mark   : %d \n", current->Maths);
        printf("Science_mark : %d \n", current->Science);
        printf("----\n");
        current = current->next;
    }
    printf("-------------End------------\n\n");
}


void printListRev(obj* head) {
    printf("------------- Rev order---------- \n\n ");	
    printf("------Student Records----------\n\n");
    if(head == NULL)
    printf("***********List is Empty*********\n\n");
    obj* current = head;
    while (current) {
        printf("student_id   : %d \n", current->id);
        printf("Maths_mark   : %d \n", current->Maths);
        printf("Science_mark : %d \n", current->Science);
        printf("----\n");
        current = current->prev;
    }
    printf("-------------End------------\n\n");
}



long findNode(int target){
obj* iter=lst_head;
long found=0;
while(iter){
 
 if(target==iter->id){
 found=(long)iter;
 return found;
 }
 iter=iter->next;

}
 	
return found;


}

void insertPos(obj* curPos,obj* target,int choice){

if(curPos==lst_head && choice==1){
     insertBeg(target);
     return;
}
if(curPos==lst_tail && choice==2){
 insertLast(target);
 return;

}
	
if(choice==1){
curPos=curPos->prev;

}
target->next=curPos->next;
curPos->next=target;
target->next->prev=target;
target->prev=curPos;


}

int deleteNode(obj* target){
obj* temp=target;
if(target==lst_head && target==lst_tail){
   lst_head=lst_tail=NULL;

}
else if( target==lst_head){
   lst_head=lst_head->next;
   lst_head->prev=NULL;

}
else if( target==lst_tail){
 	
 lst_tail=lst_tail->prev;
 lst_tail->next=NULL;

}
else{
target->prev->next=target->next;
target->next->prev=target->prev;
}
temp->next=0;
temp->prev=0;
int val=temp->id;
free(temp);
return val;

}


void main(){
 
bool flag=1;
int choice=0;

for(int i=1;i<5;i++){
   obj* stud=malloc(sizeof(obj));	
  stud->id=i;
  stud->Maths=i*10;
  stud->Science=stud->Maths*10;
  insertBeg(stud);
}

while(flag){
  char temp;
  printf("Menu Items\n");
  printf("1.Insert Entry\n");
  printf("2.Delete Entry\n");
  printf("3.Display\n");
  printf("4.Exit\n\n");
  scanf("%*c %d",&choice);
     printf("Your choice:%d\n",choice);  

  obj* node=0;

  switch(choice){
	  case 1:
              int option;		  
              printf("1.Insert at Begining\n");
              printf("2.Insert at  specific node\n");
	      printf("Enter you choice:");
	      scanf("%d",&option);
	      switch(option){
	      case 1: 
              node=getNode();
              insertBeg(node);
              break;
	      case 2:{
	      int target=0;
	      printf("Enter the id you want to find \n");
	      scanf("%d",&target);
	      long val=findNode(target);
	      obj* cur=(obj*)val;
	      if(val==0){
	           printf("*****target node not found****");
		 
	      
	      }else{
	         printf("target found =%d \n",cur->id);
		 node=getNode();
		 printf("\n");
		 int choice;
		 printf("1.Before\n");
		 printf("2.After \n");
                 scanf("%d",&choice);
		 printf("Your choice=%d\n",choice);
		 insertPos(cur,node,choice);
	      
	     }
	      break;
		     }
	      default: printf("Enter the valid option\n");
		       break;

	       }	       
	      break;

          case 3:
               printList(lst_head);	    
	       printListRev(lst_tail);  
	       break;
	  case 4:
	       flag=false;
	       break;
         case 2:
	         int id;
                 printf("Enter id of the node Do you want to delete:\n");
		 scanf("%d",&id);
		long  val=findNode(id);
		 if(val==0) printf("**node not found**\n");
		 else
	           printf("Successfully Deleted node id:%d\n",deleteNode((obj*)val));		 
		    break;
        default :
                 printf("Invalid choice\n");
		 
                  break;		 

                    		 

  
  }

}


}



