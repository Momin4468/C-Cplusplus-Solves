#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
    char data;
    struct Node* next;

};

void printlist(struct Node *node){

        int p_node = NULL;
       while(node !=NULL){

        printf("[%d]  [%d][%c]",node,p_node,node->data);
        p_node = node;
        node = node->next;


       }
       printf("[NULL]");
}

void push(struct Node** head_ref,char new_data){

        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node -> data = new_data;
        new_node -> next = (*head_ref);
        (*head_ref) = new_node;

}

void insertafter(struct Node* prev_node,char new_data){

        if(prev_node == NULL){
            printf("The given previous node can not be NULL\n");
            return;
        }
     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
     new_node -> data = new_data;
     new_node -> next = prev_node -> next;
     prev_node -> next = new_node;

}

void append(struct Node** head_ref,char new_data){
     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
     struct Node *last = *head_ref;

      new_node -> data = new_data;
      new_node -> next = NULL;

     if(*head_ref == NULL){
        *head_ref = new_node;
        return;
     }

     while(last -> next != NULL)
            last = last -> next;

     last -> next = new_node;
     return;
}


int main(){

    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *first = NULL;
    struct Node *node = NULL;

   // head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    first =  (struct Node*)malloc(sizeof(struct Node));

    int count = 0;
    int choice = 1;
    first = 0;

    while (choice)
    {
        head = (struct Node*)malloc(sizeof(struct Node));
        printf("memory we get = %d\n",head);
        printf("Enter a Character element to insert into the Linked List\n");
        scanf("%s", &head-> data);

        if (first != 0)
        {
            node->next = head;
            node = head;

        }
        else
        {
           first = node = head;

        }
        fflush(stdin);

        printf("Do you want to continue(Type 0 to exit or any integer to continue)?\n");
        scanf("%d", &choice);

    }


    node->next = 0;
    /*  reset temp to the beginning */
    node = first;




    printf("\n\nStatus of the linked list is--\n\n");
    int p_node = NULL;
       while(node !=NULL){

        printf("[%d]  [%d][%c]",node,p_node,node->data);
        p_node = node;
        node = node->next;
      }
    printf("[NULL]\n");
   //printf("No. of nodes in the list = %d\n", count);

   head->next = 0;
    /*  reset temp to the beginning */
    head = first;

    append(&head,'G');
    push(&head,'B');
    push(&head,'A');
    append(&head,'H');
    insertafter(head->next,'C');

    printf("So The created Linked List is: \n\n");
    printlist(head);
    printf("\tLagabo ne tdr.\n");
    getch();

}
