#include<stdio.h>
#include<stdlib.h>

typedef struct node1{
	int info;
	struct node1* next;
	struct node1* prev;
}node;

node *head=NULL;
node *tail=NULL;

node* create(int i){
	node* tmp=(node*)malloc(sizeof(node));
	tmp->info=i;
	tmp->next=NULL;
	tmp->prev=NULL;
	printf("\nNode Cretaed...!!!!");
	return tmp;

}


void addtohead(node *tmp){
	system("cls");

	node *t;
	t=head;
	t->prev=tmp;
	tmp->next=t;
	head=tmp;

	printf("\nNode inserted at the start...!!");
}

void addtoend(node *tmp){
	system("cls");

    if(head==tail){
    	head->next=tmp;
    	tmp->prev=head;
    	tail=tmp;

	}
	else{
        tail->next=tmp;
        tmp->prev=tail;
        tail=tmp;

	}
	printf("\nNode inserted at the end...!!!");
}

void atpos(node *newnode){
	system("cls");
	node *nextp,*curr,*tmp;
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
	    newnode->prev=curr;
	    newnode->next=tmp;
	    tmp->prev=newnode;
	    printf("\nNode inserted at position %d !!!",pos);
    }

}

void insert(){
	int data,i,p,ch;
	do{
	   system("cls");
	   printf("\nEnter the element you want to insert : ");
	   scanf("%d",&data);
	   node* tmp=create(data);
	   if(head==NULL){
	     	head=tail=tmp;
	    	printf("\nList was Empty....Item inserted at first position !!!");
     	}
    	else{
			    printf("\nAt which position you want to insert the item ??? ");
			    printf("\n1.Begining");
			    printf("\n2.Ending");
			    printf("\n3.At specific position");
			    printf("\nEnter your choice : ");
			    scanf("%d",&p);
			    switch(p){
				    case 1: addtohead(tmp);
				            break;
				    case 2: addtoend(tmp);
				            break;
				    case 3: atpos(tmp);
				            break;
                    default: printf("\nWrong choice ...Enter again...!!!");
			    }
		}
	    printf("\nDo you want to insert another node (1/0) ??");
		scanf("%d",&ch);
	}while(ch==1);
}

void deletefromhead(){
	system("cls");
	node *tmp=head;
	head=head->next;
	head->prev=NULL;
	printf("\nNode deleted from head is : %d",tmp->info);
	free(tmp);
}

void deletefromend(){
	system("cls");
	node *tmp=tail;
	tail=tail->prev;
	printf("\nNode deleted from end is : %d",tmp->info);
	free(tmp);
	tail->next=NULL;

}

void deletepos(){
	system("cls");
	int pos,i,c;
	node *pre,*curr;
	pre=head;
	curr=head->next;

	printf("\nEnter the position of node you want to delet : ");
	scanf("%d",&pos);

	if(pos==1)
		deletefromhead();

	else{
		for(i=1;i<pos-1;i++){
		    curr=curr->next;
		    pre=pre->next;
		}
	    printf("\nNode deleted from %d is : %d",pos,curr->info);
	    pre->next=curr->next;
	    curr->next->prev=pre;
	    free(curr);
    }

}


void deleten(){
	int p,ch;
	do{
		if(head==NULL){
			printf("\nList is empty...!!!!");
		}
		else if(head==tail){
			printf("\nOnly one element in the list.. delelted node is : %d ",head->info);
			free(head);
			head=NULL;
			tail==NULL;
		}
		else{
			system("cls");
			printf("\nFrom which position you want to delete the node ?? ");
			printf("\n1.Begining");
			printf("\n2.Ending");
			printf("\n3.At specific position");
			printf("\nEnter your choice : ");
			scanf("%d",&p);
			switch(p){
				case 1: deletefromhead();
				        break;
				case 2: deletefromend();
				        break;
				case 3: deletepos();
				        break;
                default: printf("\nWrong choice ...Enter again...!!!");
		    }
	    }
	    printf("\nDo you want to delete another node (1/0)??");
	    scanf("%d",&ch);
    }while(ch==1);
}

void reverse(){
	system("cls");
	node *tmp=tail;

	if(head==NULL)
	   printf("\nList is empty..!!!");

	else{
        printf("%d->  ",tail);
		for(;tmp!=NULL;tmp=tmp->prev){

			//if(tmp->prev==NULL)
			  // printf(" %d ",tmp->info);
			//else
			    printf("%d->%d->%d  ",tmp->next,tmp->info,tmp->prev);
	    }
	}

}
void display(){
	system("cls");
	node *tmp=head;
	if(head==NULL)
		printf("\nList is empty..!!!");
	else{
        printf("%d->  ",head);
       for(;tmp!=NULL;tmp=tmp->next){

			//if(tmp->next==NULL)
		        //printf("%d",tmp->info);
		    //else
		       printf("%d->%d->%d  ",tmp->prev,tmp->info,tmp->next);
	   }
    }

}

int main(){
	int c,ch;
	do{
		system("cls");
		printf("\n-------DOUBLY LINKED LIST-------");
		printf("\n1.INSERT INTO LIST");
		printf("\n2.DELETE FROM LIST");
		printf("\n3.DISPLAY THE LIST");
		printf("\n4.REVERSE THE LIST");
		printf("\n5.EXIT");
		printf("\nEnter your choice : ");
		scanf("%d",&c);
        switch(c){
        	case 1: insert();
        	        break;
        	case 2: deleten();
        	        break;
        	case 3: display();
        	        break;
        	case 4: reverse();
			        break;
			case 5: exit(0);
		}
        printf("\nDo you want to perform any function again (1/0)???");
        scanf("%d",&ch);
	}while(ch==1);
	return 0;
}
