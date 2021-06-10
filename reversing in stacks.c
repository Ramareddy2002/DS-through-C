#include<stdio.h>
#include<stdlib.h>
#define max 10
void push(int);
int pop(void);
int st[max];
int top=-1;
void main()
{
	int i,n,x,a[10];
	printf("enter the size of an array \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++)
		push(a[i]);
	for(i=0;i<n;i++)
	{
		x=pop();
		a[i]=x;
		
	}
	printf("after reversing\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void push(int x)
{
	if(top==max-1)
	{
		printf("\n over flow");
	}
	else
	{
		st[++top]=x;
	}
}
int pop()
{
	int y;
	if(top==-1)
	{
		printf("\n under flow");
	}
	else
	{
		y=st[top];
		top=top-1;
	}
	return y;
}
