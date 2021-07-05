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
	int x,val;
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
