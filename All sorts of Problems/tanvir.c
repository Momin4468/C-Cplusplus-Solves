#include <stdio.h>
#include <stdlib.h>

struct node
{
    char name;
    struct node *nextptr;
}*stnode;

void createNodeList(int n);
void NodeInsertatBegin(char name);
void displayList();

int main()
{
    char name;
    int n;
		printf("\n\n Insert a new data at the first position of a Linked List:\n");
    printf(" Input the data of nodes : ");
    scanf("%d", &n);
    fflush(stdin);
    createNodeList(n);
    printf("\n Data entered in the list are : \n");
    displayList();
    fflush(stdin);
    printf("\n Input data to insert at the beginning of the list : ");
    scanf("%c", &name);
    fflush(stdin);
    NodeInsertatBegin(name);
    printf("\n Data after inserted in the list are : \n");
    displayList();

    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int i;
    char name;

    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Input data for node 1 : ");
        scanf("%c", &name);
        stnode-> name = name;
        stnode-> nextptr = NULL;
        tmp = stnode;


        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));


            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %c", &name);
                fnNode->name = name;
                fnNode->nextptr = NULL;
                tmp->nextptr = fnNode;
                tmp = tmp->nextptr;
            }
        }
    }
}

void NodeInsertatBegin(char name)
{
    struct node *fnNode;
    fnNode = (struct node*)malloc(sizeof(struct node));
    if(fnNode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        fnNode->name = name;
        fnNode->nextptr = stnode;
        stnode = fnNode;
    }
}

void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" No data found in the list.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %c\n", tmp->name);
            tmp = tmp->nextptr;
        }
    }
}
