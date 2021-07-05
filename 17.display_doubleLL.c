struct node
{
struct node *next,*prev;
int data;
};
struct node *start=NULL;
void display()
{
	struct node *temp;
	new=(struct node *)malloc(sizeof(struct node *)); 
if(start==NULL)
{
	start=ptr;
}
else
{
	temp=start;
	while(temp->next!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
}
