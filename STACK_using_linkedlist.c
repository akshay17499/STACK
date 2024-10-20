#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int val;
    struct node*next;
}node;

node *top=NULL;

void push(int num)
{
    node*newnode=malloc(sizeof(node));
    newnode->val=num;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    if(top==NULL)
    printf("no element in stack\n");
    else
    {
       printf("Removing element : %d\n",top->val);
       top=top->next;
    }
}
void peek()
{
    if(top==NULL)
    printf("no element in stack\n");
    else
    {
        printf("Top element in stack: %d\n",top->val);
    }
}
void display()
{
    if(top==NULL)
    printf("no element in stack\n");
    else
    {
        node*temp=top;
        printf("elements in stack are : ");
        while(temp!=NULL)
        {
            printf("%d ",temp->val);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main()
{
    int option;
    printf("PRESS\n1 to add to stack\n2 to delete from stack\n3 to see top element in stack\n4 to display all elements\n5 to exit\nenter : ");
    while(1)
    {
        scanf("%d",&option);
        switch(option)
        {
            case 1 : printf("enter value to insert into stack : ");
                     int num;
                     scanf("%d",&num);
                     push(num);break;
            case 2:pop();break;
            case 3:peek();break;
            case 4:display();break;
            case 5:return 0;
        }
        printf("enter operation: ");
    }
}