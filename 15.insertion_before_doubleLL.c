struct node
{
struct node *next,*prev;
int data;
};
struct node *start=NULL;
void insertbefore()
{
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node *)); 
	int x,val;
printf("enter the ele");
scanf("%d",&x); 
new->data=x;
new->prev=NULL;
new->next=NULL;
printf("enter the node ele where we have to insert before");
scanf("%d",&val);
if(start==NULL)
{
	start=new;
}
else
{
	temp=start;
	while(temp->data!=val)
	{
		temp=temp->next;
	}
	new->next=temp;
	new->prev=temp->prev;
	temp->prev=new;
	temp->prev->next=new;
}
}
