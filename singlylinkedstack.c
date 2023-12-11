#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* next;
};
struct node* push(struct node*,int);
struct node* pop(struct node*,int*);
struct node*search(struct node*,int);

int main()
{
  struct node*sp=(struct node*)0;
  int option,item;struct node *ans;
  
do
{
        printf("\n\t\t STACK OPERATION \n");
        printf("\t\t....................\n");
	printf("\n 1.push \n");
	printf("\n 2.pop \n");
	printf("\n 3.search \n");
	printf("\n 4. exit \n");
	printf("enter the choice:");
	scanf("%d",&option);
	switch(option)

{

		case 1:
       			printf("\n enter the data:\n");
       			scanf("%d",&item);
       			sp=push(sp,item);
       			break;
		case 2:
      			if(sp==(struct node*)0)     
      			printf("empty stack");
      			else
      			{
       			sp=pop(sp,&item);
       			printf("\n popped out the value=%d \n",item);
      			} 
      			break;
		case 3:
			printf("\n enter the data to be searched:");
       			scanf("%d",&item);
       			ans=search(sp,item);
       			if(ans!=0)
       			{
          			printf("\n\t found...");
          			break;
          		}
       			else
       			{
          			printf("\n\t Not found\n");
       				break;
       			}
		case 4:
			printf("\n\t\t exiting...\n\n");
			exit(0);

		default:
        		printf("invalid choice!!! \n");
                        }              
 	}while(1);
} 

//PUSH AN ITEM
struct node* push(struct node*sp,int data)     
{
	struct node*t;
	t=(struct node*)malloc(sizeof(struct node));
  	t->data=data;
  	t->next=sp;
  	return t;
}  

//POP AN ITEM
struct node* pop(struct node*sp,int* item)
 { 
 	struct node*t=sp;
 	if(sp!=(struct node*)0)
   	{
    	*item=sp->data;
    	sp=sp->next;
    	free(t);
        }
 return sp;
 
 }
 
 // SEARCH AN ITEM
 struct node *search(struct node*sp,int item)
 {
   	while(sp!=(struct node*)0 && sp->data!=item) 
   	sp=sp->next;
   	if (sp==(struct node*)0)
                 return 0;
        else
                 return sp;
 }                
  
  
  
  
  
  
  
  
  
