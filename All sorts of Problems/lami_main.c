#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


struct node
    {
        int *pre;
        int num;
        int *next;
   };
    typedef struct node NODE;

//NODE *head=NULL;
NODE *tail=NULL;

/*void addtohead(NODE *tmp){
	system("cls");

	NODE *t;
	t=head;
	t->pre=tmp;
	tmp->next=t;
	head=tmp;

	printf("\nNode inserted at the start...!!");
}

void addtoend(NODE *tmp){
	system("cls");

    if(head==tail){
    	head->next=tmp;
    	tmp->pre=head;
    	tail=tmp;

	}
	else{
        tail->next=tmp;
        tmp->pre=tail;
        tail=tmp;

	}
	printf("\nNode inserted at the end...!!!");
}

void atpos(NODE *newnode){
	system("cls");
	NODE *nextp,*curr,*tmp;
	int i,pos;
	printf("\nEnter the position at which you want to insert the node ?? ");
	scanf("%d",&pos);

	if(pos==1){
		addtohead(newnode);
	}

	else{
	   curr=head;
	   nextp=head->next;
	   for(i=1;i<pos-1;i++){
		   nextp=nextp->next;
		   curr=curr->next;
	    }
	    tmp=nextp;
	    curr->next=newnode;
	    newnode->pre=curr;
	    newnode->next=tmp;
	    tmp->pre=newnode;
	    printf("\nNode inserted at position %d !!!",pos);
    }

}

void insert(){
	int data,i,p,ch;
	do{
	   system("cls");
	   printf("\nEnter the element you want to insert : ");
	   scanf("%d",&data);

	   NODE* tmp=(NODE*)malloc(sizeof(NODE));
	   tmp->num=data;
	   tmp->next=NULL;
	   tmp->pre=NULL;

	  /* NODE* tmp=create(data);
	   if(head==NULL){
	     	head=tail=tmp;
	    	printf("\nList was Empty....Item inserted at first position !!!");
     	}
    //	else{
			    printf("\nAt which position you want to insert the item ??? ");
			    printf("\n1.Begining");
			    printf("\n2.Ending");
			    printf("\n3.At specific position");
			    printf("\nEnter your choice : ");
			    scanf("%d",&p);
			    switch(p){
				    case 1: {
	                       system("cls");

	                       NODE *t;
                           t=head;
	                       t->pre=tmp;
	                       tmp->next=t;
                           head=tmp;
	                       printf("\nNode inserted at the start...!!");
                           break;
                      }
				    case 2: {
				           system("cls");

                           if(head==NULL){
                           head->next=tmp;
                           tmp->pre=head;
                           tail=tmp;
                           	}
	                       else{
                           tail->next=tmp;
                           tmp->pre=tail;
                           tail=tmp;
                          }
	                       printf("\nNode inserted at the end...!!!");

				            break;
				        }

				    case 3: {
	                       system("cls");
	                       NODE *nextp,*curr,*tmp;
	                       int i,pos;
                           printf("\nEnter the position at which you want to insert the node ?? ");
	                       scanf("%d",&pos);

	                       if(pos==1){
                                NODE *t;
                                t=head;
	                            t->pre=tmp;
	                            tmp->next=t;
                                head=tmp;
                                printf("\nNode inserted at the start...!!");
	                       }

	                       else{
	                            curr=head;
	                            nextp=head->next;
	                       for(i=1;i<pos-1;i++){
		                        nextp=nextp->next;
		                        curr=curr->next;
                            }
	                       tmp=nextp;
	                       curr->next=newnode;
	                       newnode->pre=curr;
	                       newnode->next=tmp;
	                       tmp->pre=newnode;
	                       printf("\nNode inserted at position %d !!!",pos);
                        }
                         break;
                    }


                    default: printf("\nWrong choice ...Enter again...!!!");
			    }
		//}
	    printf("\nDo you want to insert another node (1/0) ??");
		scanf("%d",&ch);
	}while(ch==1);

	return;
}
*/


void main()
{


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
        printf("Do you want to continue(1/0)?\n");
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
    getch();

    int data,i,p,ch;
	do{
	   system("cls");
	   printf("\nEnter the element you want to insert : ");
	   scanf("%d",&data);

	   NODE* tmp=(NODE*)malloc(sizeof(NODE));
	   tmp->num=data;
	   tmp->next=NULL;
	   tmp->pre=NULL;

	  /* NODE* tmp=create(data);
	   if(head==NULL){
	     	head=tail=tmp;
	    	printf("\nList was Empty....Item inserted at first position !!!");
     	}
    	else{*/
			    printf("\nAt which position you want to insert the item ??? ");
			    printf("\n1.Begining");
			    printf("\n2.Ending");
			    printf("\n3.At specific position");
			    printf("\nEnter your choice : ");
			    scanf("%d",&p);
			    switch(p){
				    case 1: {
	                       system("cls");

	                       NODE *t;
                           t=head;
	                       t->pre=tmp;
	                       tmp->next=t;
                           head=tmp;
	                       printf("\nNode inserted at the start...!!");
                           break;
                      }
				    case 2: {
				           system("cls");

                           if(head==NULL){
                           head->next=tmp;
                           tmp->pre=head;
                           tail=tmp;
                           	}
	                       else{
                           tail->next=tmp;
                           tmp->pre=tail;
                           tail=tmp;
                          }
	                       printf("\nNode inserted at the end...!!!");

				            break;
				        }

				    case 3: {
	                       system("cls");
	                       NODE *nextp,*curr,*tmp1;
	                       int i,pos;
                           printf("\nEnter the position at which you want to insert the node ?? ");
	                       scanf("%d",&pos);

	                       if(pos==1){
                                NODE *t;
                                t=head;
	                            t->pre=tmp;
	                            tmp->next=t;
                                head=tmp;
                                printf("\nNode inserted at the start...!!");
	                       }

	                       else{
	                            curr=head;
	                            nextp=head->next;
	                       for(i=1;i<pos-1;i++){
		                        nextp=nextp->next;
		                        curr=curr->next;
                            }
	                       tmp1=nextp;
	                       curr->next=tmp;
	                       tmp->pre=curr;
	                       tmp->next=tmp1;
	                       tmp1->pre=tmp;
	                       printf("\nNode inserted at position %d !!!",pos);
                        }
                         break;
                    }


                    default: printf("\nWrong choice ...Enter again...!!!");
			    }
		//}
	    printf("\nDo you want to insert another node (1/0) ??");
		scanf("%d",&ch);
	}while(ch==1);

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
