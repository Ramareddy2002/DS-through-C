struct node
{
struct node *next,*prev;
int data;
};
struct node *start=NULL;
void insertbegin()
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
	new->next=start;
	start->prev=new;
	start=new;
}
}
