
void insert()
{
int num;
printf("\n Enter the number to be inserted in the queue : ");
scanf("%d", &num);
if(front==0 && rear==MAX–1)
printf("\n OVERFLOW");
else if(front==–1 && rear==–1)
{
front=rear=0;
queue[rear]=num;
}
else if(rear==MAX–1 && front!=0)
{
rear=0;
queue[rear]=num;
}
else
{
rear++;
queue[rear]=num;
}
}
int delete_element()
{
int val;
if(front==–1 && rear==–1)
{
printf("\n UNDERFLOW");
return –1;
}
val = queue[front];
if(front==rear)
front=rear=–1;
else
{
if(front==MAX–1)
front=0;
else
front++;
}
return val;
}
