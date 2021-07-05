struct node
{
struct node *next,*prev;
int data;
};
struct node *start=NULL;
void insertafter()
{
	struct node *temp,*ptr;
	new=(struct node *)malloc(sizeof(struct node *)); 
	int val;
	printf("enter the node ele where we have to delete after");
        scanf("%d",&val);
	temp=start;
	while(temp->data!=val)
	{
		temp=temp->next;
	}
	ptr=temp->prev;
	temp->prev=ptr->prev;
	ptr->prev->next=temp;
free(ptr);
}
