#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{

    struct node
    {
        int num;
        int *ptr;
   };
    typedef struct node NODE;

    NODE *head, *first, *temp , *prev= 0;
    int count = 0;
    int choice = 1;
    first = 0;

    while (choice)
    {
        head  = (NODE *)malloc(sizeof(NODE));  //https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm
        printf("memory we get = %d\n",head);
        printf("Enter a data element to insert into the Linked List\n");
        scanf("%d", &head-> num);
        if (first != 0)
        {
            temp->ptr = head;
            temp = head;

        }
        else
        {
            first = temp = head;

        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 to exit or any integer to continue)?\n");
        scanf("%d", &choice);

    }


    temp->ptr = 0;
    /*  reset temp to the beginning */
    temp = first;
    prev = NULL;



    printf("\n status of the linked list is\n");
    while (temp != 0)
    {

        printf("[%d]  [%d][%d]",temp,prev,temp->num);
        count++;
        prev = temp;
        temp = temp->ptr;
    }
    printf("[NULL]\n");
    printf("No. of nodes in the list = %d\n", count);


    //temp->ptr = 0;
    /*  reset temp to the beginning */
    temp = first;
   // prev = NULL;


    printf("Enter new data: ");
    int new_data;
    scanf("%d", &new_data);

    struct node* prev_node = temp;

        if(prev_node == NULL){
            printf("The given previous node can not be NULL\n");
            return 0;
        }
    // struct node* new_node = (struct node*)malloc(sizeof(struct node));
     temp -> ptr = new_data;
      temp-> ptr = prev_node -> ptr;
     prev_node -> ptr =temp;


   prev = NULL;
    printf("\n New status of the linked list is\n");
    while (temp != 0)
    {

        printf("[%d]  [%d][%d]",temp,prev,temp->num);
        count++;
        prev = temp;
        temp = temp->ptr;
    }
    printf("[NULL]\n");
    printf("No. of nodes in the list = %d\n", count);


}
