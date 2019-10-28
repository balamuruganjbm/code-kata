#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *prev,*tptr,*start,*newnode;
void addnode(int num)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if(start==NULL)
        start=newnode;
    else
    {
        for(prev=NULL,tptr=start;tptr && tptr->data > newnode->data;prev=tptr,tptr=tptr->next);
        if(tptr==start)
        {
            newnode->next=start;
            start=newnode;
        }
        else
        {
            prev->next=newnode;
            newnode->next=tptr;
        }
    }
}
int main()
{
    int i,num,size,size2;
    scanf("%d%d",&size,&size2);
    for(i=0;i<size;scanf("%d",&num),addnode(num),i++);
    for(i=0;i<size2;scanf("%d",&num),addnode(num),printf("%d ",start->data),i++);
    return 0;
}

// INPUT
// 5 2
// 1 2 3 4 5
// 5 4
// OUTPUT
// 5 5
