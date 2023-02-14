#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
    int data;
    struct Node* next;

};

void printlist(struct Node *node){

       while(node !=NULL){

        printf("%d ",node->data);
        node = node->next;

       }
}

void push(struct Node** head_ref,int new_data){

        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node -> data = new_data;
        new_node -> next = (*head_ref);
        (*head_ref) = new_node;

}

/*void insertafter(struct Node* prev_node,int new_data){

        if(prev_node == NULL){
            printf("The given previous node can not be NULL\n");
            return;
        }
     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
     new_node -> data = new_data;
     new_node -> next = prev_node -> next;
     prev_node -> next = new_node;

}*/

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
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head -> data =10;
    head -> next = second;
    second -> data = 20;
    second ->next = third;
    third -> data = 30;
    third -> next = NULL;

    append(&head,6);
    push(&head,7);
    push(&head,1);
    append(&head,4);
    //insertafter(head->next,8);

    printf("Enter new data: ");
    int new_data;
    scanf("%d", &new_data);

    struct Node* prev_node = head -> next;

        if(prev_node == NULL){
            printf("The given previous node can not be NULL\n");
            return;
        }
     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
     new_node -> data = new_data;
     new_node -> next = prev_node -> next;
     prev_node -> next = new_node;

    printf("The created Linked List is: ");
    printlist(head);
    getch();

}
