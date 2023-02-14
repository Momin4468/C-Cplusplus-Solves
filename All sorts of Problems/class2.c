#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void printlist(struct Node *n){
   while(n!= NULL){
     printf("%d ",n->data);
     n = n->next;
   }
}

int main()
{
   struct Node *head = NULL;
   struct Node *second = NULL;
   struct Node *third = NULL;
   head = (struct node *)malloc(sizeof(struct Node));
   second = (struct node *)malloc(sizeof(struct Node));
   third = (struct node *)malloc(sizeof(struct Node));

   head->data = 10;
   head->next = second;
   //second->data = ;
   second->next = third;
//   //third->data = 30;
   third->next = NULL;

   printlist(head);
   return 0;

}
