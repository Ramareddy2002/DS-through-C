struct node
{
struct node *next,*prev;
int data;
};
struct node *start=NULL;
void insertend()
{
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node *)); 
	int x;
printf("enter the value");
scanf("%d",&x); 
new->data=x;
new->prev=NULL;
new->next=NULL;
if(start==NULL)
{
	start=new;
}
else
{
	temp=start;
	while(temp->next!=NULl)
	{
		temp=temp->next;
	}
	temp->next=new;
	new->prev=temp;
}
}
