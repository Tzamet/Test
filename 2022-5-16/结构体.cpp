#include<stdio.h>
int MAXSIZE=10;
typedef struct stack{
	int data[MAXSIZE];
	int top;
}stack;
char Push(stack *S,int e);
char Push(stack *S,int e)
{
	if(S->top==MAXSIZE-1)
	return ERROR;
	S->top++;
	S->data[S->top]=e;
	return OK;
}
int main()
{
	stack n1.top=0;
	for(int i=0;i<10;i++)
	{
		push( )
	}
	return 0;
}
