void delelation_end()
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
prev=temp;
temp=temp->link;
}
prev->link=temp->link;
free(temp);
}
