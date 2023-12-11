#include<stdio.h>
#include<stdlib.h>
#define size 10
int queue[size];
int front=0,rear=0;
void main()
{
	void enqueue(int);
	int dequeue();
	int search(int),ans;
	int option,item;
	do 
	{
		printf("\n 1.insert \n");
		printf("\n 2.delete \n");
		printf("\n 3.search \n");
		printf("\n 4.exit \n");
		printf("\n option: \n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("item \n");
      				scanf("%d",&item);
      				enqueue(item);
      				break;
			case 2:
				item=dequeue();
      				printf("item=%d\n",item);
      				break;
			case 3:
				printf("item to search\n");
      				scanf("%d",&item);
      				ans=search(item);
      				if(ans!=0)
      				{
      					printf("%d found at %d position \n",item,ans);
      					break;
      				}
      				else
      				{
      					printf("%d not found \n",item);
      					break;
      				}
			case 4:
				exit(0);
		}
	}
	while(1);
}
      void enqueue(int item) 
      {
      int t;
      t=(rear+1)%size;
      if(t==front)
      {
      printf("queue is full\n");
      exit(1);
      }
      else
      {
      rear=t;
      queue[rear]=item;
      }
      }
      
      int dequeue()
      {
      if(front==rear)
      {
      printf("queue is empty \n");
      exit(2);
      }
      front=(front+1)%size;
      return queue[front];
      }
      
      int search(int item)
      {
      int t1,t2;
      t1=front,t2=rear;
      t1=(t1+1)%size;
      while(t1!=t2&&queue[t1]!=item)
      t1=(t1+1)%size;
      if(queue[t1]==item)
      return t1;
      else
      return 0;
      }            
      

      
