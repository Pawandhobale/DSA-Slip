#include<stdio.h>
#include<stdlib.h>
typedef struct node
{  
  int data;
  struct node *next,*prev;
  
}NODE;
struct node *create(struct node *list)
{
	 int i,n;
	 struct node *new,*temp;
	 printf("enter the limit");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	new=(struct node*)malloc(sizeof(struct node));
	 	printf("enter the data for the node");
	 	scanf("%d",&new->data);
	 	new->next=NULL;
	 	if(list==NULL)
	 	{
	 		list=new;
	 		temp=new;
	 		
		 }
		 else
		 {
		  temp->next=new;
		  new->prev=temp;
		  temp=new;
		 }
	 }
	return list;
}
void dis(struct node *list)
{
	struct node *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		printf("%d",temp->data);
	}
}
int main()
{
	int ch;
	struct node *list=NULL;
	do{
		printf("\n1.create\n2.display\n.3exit");
		 printf("enter the choice");
		 scanf("%d",&ch);
		 switch(ch)
		 {
		 	case 1:list=create(list);
		 	break;
		 	case 2:dis(list);
		 	break;
		 	case 3:break;
		 	default:printf("invalid choice");
		 	
		 }
	}while(ch<3);
}

