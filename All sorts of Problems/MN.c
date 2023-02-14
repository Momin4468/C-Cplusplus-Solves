#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
    int data;
    struct Node* next;

};

void printlist(struct Node *node){

       while(node !=NULL){

        printf("[%d]  [%d]",node,node->data);
        node = node->next;

       }

       printf("[NULL]");
}


void append(struct Node** head_ref,int new_data){
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
    struct Node *first = NULL;
    struct Node *node = NULL;

    first =  (struct Node*)malloc(sizeof(struct Node));

    int i=1;
    int choice = 1;
    first = 0;

    while (choice)
    {
        head = (struct Node*)malloc(sizeof(struct Node));
        printf("memory we get = %d\n",head);
        printf("\nEnter a data element to put into the Linked List\n");
        printf("Enter Data no. %d: ",i);
        scanf("%d", &head-> data);

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
        printf("\nDo you want to continue(Type 0 to exit or any integer to continue)?\n");
        scanf("%d", &choice);
        printf("\n\n");
         i++;
    }


    node->next = 0;
    node = first;




    printf("\n\n status of the current linked list is: \n");
       while(node !=NULL){

        printf("[%d]  [%d]",node,node->data);
        node = node->next;
      }
    printf("[NULL]\n");


   head->next = 0;
    head = first;

    append(&head,40);


    printf("\n\nSo The created Linked List after inserting at last position is: \n");
    printlist(head);

    getch();

}
