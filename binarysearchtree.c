#include<stdio.h>
#include<stdlib.h>

struct node
{
            int data;
            struct node*lchild,*rchild;
};

struct node*insert(struct node*,int);
struct node*delete(struct node*,int);
struct node*search(struct node*,int);
void inorder(struct node*);

int main() 
{
         struct node*root=(struct node*)0;
         int option,item;
         struct node*ans;
         do
         {
           printf("\n\t\t BINARY SEARCH TREE OPERATIONS \n");
           printf("\t\t........................\n");
           printf("\n 1.insert \n");
           printf("\n 2.delete \n");
           printf("\n 3.search \n");
           printf("\n 4.traverse \n");
           printf("\n 5.exit \n");
           printf("\n\t enter the choice:");
           scanf("%d",& option);
           switch(option)
           {
                  case 1:
                        printf("\n enter the data:");
                        scanf("%d",&item);
                        root=insert(root,item);
                        break;
                        
                  case 2:
                        printf("\n enter the item to be deleted:");
                        scanf("%d",&item);
                        root=delete(root,item);
                        break;
                        
                  case 3:
                        printf("\n enter the item to be searched:");
                        scanf("%d",&item);
                        ans=search(root,item);
                        if(ans!=(struct node*)0)
                                printf("\n\t Found....\n");
                        else
                                 printf("\n\t Not Found!!!\n");
                        break;
                        
                  case 4:
                         printf("\n traverse data:");
                         inorder(root);
                         break;
                     
                  case 5:
                         printf("\n\t\t exiting......\n\n");
                         exit(0);
                  default:
                         printf("\n Invalid choice!!! \n");
            }
         }
         while(1);
 }
 //function to insert an item in binary search tree
 
struct node*insert(struct node*root,int data)
{
       struct node*par=(struct node*)0;
       struct node*t,*t1=root;
       while(root!=(struct node*)0 && data!=root->data)
       {
             par=root;
             if(data<root->data)
                     root=root->lchild;
             else
                  root=root->rchild;
       }
       if(root!=(struct node*)0)
               printf("\n\t duplicate.....\n");
       else
       {
                t=(struct node*)malloc(sizeof(struct node));
                t->data=data;
                t->lchild=t->rchild=(struct node*)0;
                if (par==(struct node*)0)
                          t1=t;
                else if(data<par->data)
                       par->lchild=t;
                else
                       par->rchild=t;
         }
         return t1;
}

//function to search an item from the binary search tree

struct node*search(struct node*root,int data)
{
            while(root!=(struct node*)0 && root->data!=data)
            {
                  if(data<root->data)
                          root=root->lchild;
                   else
                           root=root->rchild;
             }
             if(root==(struct node*)0)
                      return 0;
             return root;
}

//function to traverse an item from the binary search tree

void inorder(struct node*root)
{
     if(root!=(struct node*)0)
     {
         inorder(root->lchild);
         printf("%d\t",root->data);
         inorder(root->rchild);
      }
}

//function to delete an item from the binary search tree

struct node*delete(struct node*root,int data)
{
            struct node*par=(struct node*)0;
            struct node*suc;
            struct node*sucpar;
            struct node*t=root;
            while(root!=(struct node*)0 && root->data!=data)
            {
                  par=root;
                  if(data<root->data)
                          root=root->lchild;
                  else
                          root=root->rchild;
             }            
}












                        
