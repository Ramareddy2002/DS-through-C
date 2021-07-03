void delelation_begin()
{
struct node *new,*temp,*ptr;
int x;
new=(struct node *)malloc(sizeof(struct node *)); 
printf("enter the value");
scanf("%d",&x); 
new->data=x;
if(start==NULL)
{
	start=new; 
	new->link=start;
}
else
{
	ptr=start;
	temp=start; 
	while(temp->link!=start)
	{
		temp=temp->link;
	}
temp->link=ptr->link; // or we can write as temp->link=start->link
start=ptr->link // or we can write as start=start->link
free(ptr);
}
