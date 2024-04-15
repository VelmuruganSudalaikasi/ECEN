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
 *  1.Entry 
 *  2.dispaly
 *  3.Exit
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
int *prev=NULL;
while(head){

 if(head->id==target){
  return prev;
 } 
 prev=head;
 head=head->next;
	
}
prev=-1;
return prev;

}

void insertPos(obj *node, obj* prev,int choice){
//Before
 if(choice==2){
prev=prev->next;
}	
if(prev==0){
node->next=lst_head;
lst_head=node;

}else{
node->next=prev->next;
prev->next=node;

}

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


void main(){
bool flag=true;
int choice;

while(flag){
 obj* node,*prev;
 printf("Menu Items\n");
 printf("1.Insert Entry\n");
 printf("2.Display List\n");
 printf("3.Exit\n");

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
		      if(prev==-1){
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
	      printList(lst_head);
	      break;
	 case 3:
	      flag=false;
	      break; 
	 default:
	      printf("Your choice : %d\n",choice);
	      printf("------------------In valid choice:---------------- \n");

 
 

}



}
free(lst_head);
}
