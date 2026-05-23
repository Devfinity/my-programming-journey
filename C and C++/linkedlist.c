#include <stdio.h>
#include <stdlib.h>

typedef struct node //main structure of a linked list
{
    int data;
    struct node *next; 
}Node; 

Node *start = NULL; //so there is no garbage value

void create()
{
    Node *newnode, *temp; 
    int data;

    newnode = (Node *)malloc (sizeof (*newnode)); 

    scanf("%d", &data);

    newnode->data = data; //mustn't forget or output will be 0
    newnode->next = NULL;

    if(start == NULL)
    {
        start = newnode; //only runs at start
    }
    else
    {
        temp = start;

        while(temp->next != NULL) //so we can go till the next null block
        {
            temp = temp->next;
        }
        temp ->next = newnode; //here we assign the value after we reach the null block
    }
}

void display()
{
    Node *temp = start;

    while(temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next; //goes to next
    }
    printf("NULL\n");
    return;
}

int main()
{
    int n, i;

    printf("Enter how many nodes you want: ");
    scanf("%d", &n);

    printf("Enter the node data: ");
    for(i = 0; i < n; i++)
    {
        create();
    }

    display();
    return 0;
}