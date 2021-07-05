#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
struct node
{
int data,exp;
struct node *next;
};
struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
int main(int argc, char *argv[]) {
int option;
do
{
printf("\n 1: Create a list");
printf("\n 2: Display the list");
printf("\n 3: EXIT");
printf("\n\n Enter your option : ");
scanf("%d", &option);
switch(option)
{
case 1: start = create_ll(start);
printf("\n LINKED LIST CREATED");
break;
case 2: start = display(start);
break;
}
}while(option !=13);
getch();
return 0;
}
struct node *create_ll(struct node *start)
{
struct node *new_node, *ptr;
int num,num2;
printf("\n Enter -1 to end");
printf("\n Enter the data : ");
scanf("%d", &num);
printf("\n Enter the exp: ");
scanf("%d", &num2);
while(num!=-1)
{
new_node = (struct node*)malloc(sizeof(struct node));
new_node -> data=num;
new_node -> exp=num2;
if(start==NULL)
{
new_node -> next = NULL;
start = new_node;
}
else
{
ptr=start;      
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next = new_node;
new_node->next=NULL;
}
printf("\n Enter the data : ");
scanf("%d", &num);
printf("\n Enter the exp: ");
scanf("%d", &num2);
}
return start;
}
struct node *display(struct node *start)
{
struct node *ptr;
ptr = start;
while(ptr != NULL)
{
printf("\t %d", ptr -> data);
printf("\t %d", ptr -> exp);

ptr = ptr -> next;
}
return start;
}
