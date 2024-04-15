
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
 *  1.Insert Entry 
 *  2.Delete Entry
 *  3.Display Record
 *  4.Exit
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


obj* lst_head=0;


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
obj* find(int target,obj* head){
obj temp;
temp.next=head;
obj* prev=&temp;

while(head){
if(target==head->id){
return prev;

}
prev=prev->next;
head=head->next;

}


if(head==0){
return prev=NULL;

}
return prev;

}

void insertPos(obj *node, obj* prev,int choice){
if(choice==2) prev=prev->next;
node->next=prev->next;
prev->next=node;
}



void insertBeg(obj *node){
 node->next=lst_head;
 lst_head=node;
}





obj* getNode(){

 obj* stud=malloc(sizeof(obj));
  
                                
 printf("Enter id:");
 scanf("%d",&(stud->id));    
                                
 printf("Maths mark:");
 scanf("%d",&(stud->Maths));
                                
 printf("Science mark:");
 scanf("%d",&((stud->Science)));


 return  stud;


}
int deleteNode(obj* node){
obj* temp=NULL;
  temp= node->next;
  if(temp==lst_head){lst_head= lst_head->next;}
  node->next=node->next->next; 
 
  int val=temp->id;
//  free(temp); im using static objec so command the line
  return val;

}

void main(){
bool flag=true;
int choice;

obj stud1,stud2,stud3,stud4,stud5;
stud1.id=1;
stud1.Maths=10;
stud1.Science=100;
stud1.next=NULL;
stud2.id=2;
stud2.Maths=20;
stud2.Science=200;

stud2.next=NULL;
stud3.id=3;
stud3.Maths=30;
stud3.Science=300;

stud3.next=NULL;

stud4.id=4;
stud4.Maths=40;
stud4.Science=400;

stud4.next=NULL;
stud5.id=5;
stud5.Maths=50;
stud5.Science=500;

stud5.next=NULL;

insertBeg(&stud1);

insertBeg(&stud2);
insertBeg(&stud3);
insertBeg(&stud4);
insertBeg(&stud5);
while(flag){
 obj* node,*prev;
 printf("Menu Items\n");
 printf("1.Insert Entry\n");
 printf("2.Delete Entry\n");
 printf("3.Display List\n");
 printf("4.Exit\n");

 scanf("%d",&choice);

 switch(choice){
 
	 case 1:

	        int choice;
		node=getNode();
		printf("1.Insert at Beg\n");
		printf("2.Insert at node Before/After\n");
                scanf("%d",&choice);
		switch(choice){
                case 1:
		   insertBeg(node);
		   break;
		case 2:
		      int choice;
		      int target;
		      printf("Enter the id number of node:\n");
		      scanf("%d",&target);
		      obj* prev=find(target,lst_head);
		      if(prev==NULL){
		       printf("------------Node not found----------\n");
		       free(node);
		      
		      }else {
 
		      printf("1.Before \n");
		      printf("2.After \n");
		      scanf("%d",&choice);
		      if(choice==1 || choice==2){
		       insertPos(node,prev,choice);
		           
		      }
		      else{
		      free(node);
		      printf("---------------Invalid choice----------- \n");
		      }

		      }
		      break;
	         

                    
	       default: 
		   free(node);
                   printf("---------Invalid option----- ----------- \n");
		   break;
	         
		}
		 break; 
           case 2:
	     int target;	 
	     printf("Enter the node id to delete");
	     scanf("%d",&target);
	    obj* prev=find(target,lst_head);
	   // printf("prev id=%d",prev->id);
	   if(prev==NULL){
	    printf("-------node not found------------\n");
	    }
	    else {
	       printf("Deleted node id=%d\n ",deleteNode(prev));
	    
	    
	    }  
         break;
	 case 3:
	      printList(lst_head);
	      break;
	 case 4:
	      flag=false;
	      break; 
	 default:
	      printf("Your choice : %d\n",choice);
	      printf("------------------In valid choice:---------------- \n");

 
 

}



}
//free(lst_head); statically allocated so i command the line
}
