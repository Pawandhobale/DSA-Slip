
// write the program copy the content of one stack into other stack

#include<stdio.h>
char s[20];
int top;
void init()
{
	top=-1;
	
}
int isempty()
{
	if(top==-1)
	return 1;
	else
	return 0;
	
}
int isfull()
{
	if(top==19)
	return 1;
	else
	return 0;
	
}
void push(char ch)
{
	if(isfull()==1)
	printf("full hai bhai");
	else
	{
		top++;
		s[top]=ch;
		
	}
}
char pop()
{
	char ch;
	if(isempty()==1)
	printf("khali hai bhai kya nikaloge...!");
	else
	{
		ch=s[top];
		top--;
		
	}
	return ch;
	
}

int main()
{
	int i,j=0;
	char temp[20];
	init();
	char str[20];
	printf("jo likhna hai vo likhiye=");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		push(str[i]);
		
	}
	while(!isempty())
	{
		temp[j]=pop();
		j++;
	}
	temp[j]='\0';
	printf("jo pahali bar lika tha vo ye raha=");
	for(i=0;temp[i]!='\0';i++)
	{
		push(temp[i]);
	}
	 while(!isempty())
	 
	 {printf("%c",pop());
	 
	 	
	 }
}
