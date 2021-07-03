void display()
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
		printf("%d",temp->data);
		temp=temp->link;
	}
printf("%d",temp->data);
}
