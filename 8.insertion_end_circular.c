void insertionend()
{
struct node *new,*temp;
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
temp=start; 
while(temp->link!=start)
{
temp=temp->link;
}
temp->link=new; 
new->link=start;
}
