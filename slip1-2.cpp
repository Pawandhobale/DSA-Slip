//write the c program of link list and use any sort teqnices tosort the eliment

#include<stdio.h>
#include<stdlib.h>

 struct node 
{
	int data;
	struct node *next;
	
}NODE;

NODE*create(NODE *list)
{
	int i,n;
	NODE *new,*temp;
	printf("enter the limit");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       new=(NODE*)malloc(sizeof(NODE));
       printf("enter the data for the node");
       scanf("%d",&new->data);
       new->next=NULL;
       if(list==NULL);
       {
       	list=new;
       	temp=new;
	   }
		else
		{
			temp->next=new;
			temp=new;
			
		}
	 }return list;
	 
	
	
}
void dis(NODE *list)
{
	NODE *temp;
	
	for(temp=list;temp!=NULL;temp=temp->next)
{
	printf("%d",temp->data);}
	
}
NODE *bbs(struct node *list)
{
	NODE *temp,*temp1;
	int t;
	for(temp=list;temp->next!=NULL;temp=temp->next)
	{
		for(temp1=list;temmp->next!=NULL;temp1=temp1->next)
        {
        	if(temp1->data>temp1->next->data)
        	{
        		
        		t=temp1->data;
        		temp1->data=temp1->next->data;
        		temp1->next->data=t;
        		
			}
			}	
	}return list;
}
int main()
{
	int ch,num;
	NODE *list=NULL;
	list=create(list);
	dis(list);
	printf("\nsorted list");
	bbs(list);
	dis(list);
}
