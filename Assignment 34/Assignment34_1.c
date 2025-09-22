#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;

    // Allocate memory for new node

   newn = (PNODE)malloc(sizeof(NODE));
   newn->data = no;
   newn->next = NULL;
    // If linked list is empty
    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        // If linked list is not empty
        newn->next = *first;
        *first = newn;
    }

}
void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int FirstOccurance(PNODE first , int no)
{
    int iCnt = 0;

    while(first != NULL)
    {
        if(first->data == no)
        {
            return iCnt; // Return the index of first occurrence
        }
        first = first->next;
        iCnt++;
    }
    return -1; // Return -1 if not found
}



int main()
{
    PNODE Head = NULL;

    int iRet = 0;

    
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);
    Display(Head);

    iRet = FirstOccurance(Head, 21);
    if(iRet != -1)
    {
        printf("First occurrence of 21 is at index: %d\n", iRet);
    }
    else
    {
        printf("21 not found in the linked list.\n");
    }
    return 0;
}