struct node
{
struct node *next,*prev;
int data;
};
struct node *start=NULL;
void insertafter()
{
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node *)); 
	int x,val;
printf("enter the ele");
scanf("%d",&x); 
new->data=x;
new->prev=NULL;
new->next=NULL;
printf("enter the node ele where we have to insert after");
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
	new->next=temp->next;
	temp->next->prev=new;
	temp->next=new;
	new->prev=temp;
}
}
