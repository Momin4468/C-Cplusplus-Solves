#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void main()
{
  struct node
    {
        int *pre;
        int num;
        int *next;
   };
    typedef struct node NODE;

    NODE *head, *first, *temp = 0;
    int count = 0;
    int choice = 1;
    int temp2;
    first = 0;

    while (choice)
    {
        head  = (NODE *)malloc(sizeof(NODE));
        printf("Enter a data element to insert into the Linked List\n");
        scanf("%d", &head-> num);
        if (first != 0)
        {
            temp->next = head;
            temp = head;
            temp->pre = temp2;
        }
        else
        {
            head->pre = NULL;
            first = temp = head;
        }
        temp2=head;
        fflush(stdin);
        printf("Do you want to continue(Type 0 to exit or any integer to continue)?\n");
        scanf("%d", &choice);

    }
    temp->next = 0;
    temp = first;
    printf("\n status of the linked list is\n");
    while (temp != 0)
    {
        printf("[%d]   [%d] [%d] ",temp,temp->pre,temp->num);
        count++;
        temp = temp->next;
    }
    printf("[0]\n");
    printf("No. of nodes in the list = %d\n", count);
}
