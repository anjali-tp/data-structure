#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node*left,*right;
};

struct node*insert(struct node*,int);
struct node*delete(struct node*,int);  
struct node*search(struct node*,int);  

int main()
{
	struct node*dl=(struct node*)0;  
	int option,item;
	struct node*ans;
	do
	{
		printf("\n\t\t DOUBLY LINKED LIST OPERATION \n");
		printf("\t\t................................\n");
		printf("\n 1.insert \n");
		printf("\n 2.delete \n");
		printf("\n 3.search \n");
		printf("\n 4.exit \n");
		printf("\n\t enter the choice:");
		scanf("%d",&option);
		switch(option)
		{
		     case 1:
		            printf("\n Enter the data:");
		            scanf("%d",&item);
		            dl=insert(dl,item);
		            break;
		            
		     case 2:
		            printf("\n Enter the item to be delete:");
		            scanf("%d",&item);
		            dl=delete(dl,item);
		            break;
		            
		     case 3:printf("\n Enter the item to be searched:");
		     	    scanf("%d",&item);
		     	    ans=search(dl,item);
		     	    if(ans==(struct node*)0)          
		     	            printf("\n\t Not found!!!\n");
		     	    else
		     	            printf("\n\t Found........\n");
		     	    break;
		     	    
		     case 4:
		     	    printf("\n\t\t Exiting...\n");
		     	    exit(0);
		     default:
		             printf("\n invalid choice!!! \n");
		     }    
	}       
	while(1);
}

//function to insert an item 
struct node*insert(struct node*dl,int item)
{
           struct node*t;
           t=(struct node*)malloc(sizeof(struct node));
           t->data=item;
           t->left=(struct node*)0;
           t->right=dl;
           if(dl!=(struct node*)0)
                   dl->left=t;
                   return t;
}                           

//function to delete an item 
struct node*delete(struct node*dl,int item)
{
           struct node*t;
           t=search(dl,item);
           if(t==(struct node*)0)
                 printf("\n\t Not Found!!!\n");
           else
           {
                 if(t->left==(struct node*)0&& t->right==(struct node*)0)     
                 {
                        dl=(struct node*)0; 
 		 }
 		 else if(t->left==(struct node*)0)
 		 {
 		         t->right->left=t->left;
 		         dl=dl->right;
 		  }
 		  else if(t->right==(struct node*)0)
 		  {
 		         t->left->right=t->right;
 		  }
 		  else
 		  {
 		          t->left->right=t->right;
 		          t->right->left=t->left;
 		  }
 		  printf("%d is deleted \n",item);
 		  free(t);
 	     }
 	     return dl;
}                
//function to search an item
struct node*search(struct node*dl,int item)
{
      while(dl!=(struct node*)0 && dl->data!=item)
                 dl=dl->right;
      return dl;
}   
		             
		             
		             
		             
		             
		             
		             
		             
		             
		             
		             
		     	            
