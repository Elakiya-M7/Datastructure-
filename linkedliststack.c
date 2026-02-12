#include<stdio.h>
#include <stdlib.h>
struct node 
{
	int data;
	struct node * next;
};

int node_count=0;
struct node *create()
{   
    printf("ENTER THE VALUE TO PUSH:");
	int d ;
	scanf("%d",&d);
	struct node * nn = (struct node*)malloc (sizeof(struct node));
	nn -> data=d;
	nn-> next = NULL;
	return nn;
 } 
void push(struct node**h)
{
   struct node*n = create();
   if(*h==NULL)
   {
   	*h= n;
   	node_count++;
	   }	
	
	else 
	{
		n -> next = *h;
		*h =n;
		node_count++;
	}
}

void pop(struct node**h)
{
  if(*h==NULL)	
  printf("STACK IS EMPTY\n");

  else
  { 
    node_count--;
    printf("THE DELETED VALUE IS %d",(*h) -> data);
  	struct node*temp = *h;
  	*h = temp -> next;
  	free(temp);
  }
}
void peek (struct node *h)
{
	if(h == NULL)
	{
		printf("STACK IS EMPTY\n");
	}
	else 
	{
		printf("THE TOP IS POINTING TO %dTH NODE WHICH HOLDS %d\n",node_count,h -> data);
	}
}

int main()
{  
   struct node *h=NULL;

 while(1){
 	printf("\n1.PUSH\n2.POP\n3.PEEK\n4.EXIT\n");
	printf("ENTER THE OPERATION:");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			push(&h);
			break;
		case 2:
			pop(&h);
			break;
		case 3:
			peek(h);
			break;
		case 4:
		    return 0;	
	}
}
}
