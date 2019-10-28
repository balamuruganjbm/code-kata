#include <stdio.h>
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
        for(prev=NULL,tptr=start;tptr;prev=tptr,tptr=tptr->next);
            prev->next=newnode;
            newnode->next=tptr;
    }
}
struct node * reverse(struct node *someNode,struct node *newNext)
{
    static struct node* newStart=NULL;
    if(someNode->next==NULL)
    {
        newStart=someNode;
        someNode->next=newNext;
        return newStart;
    }
    reverse(someNode->next,someNode);
    someNode->next=newNext;
    return newStart;
}
int main()
{
    int i,num,size;
    scanf("%d",&size);
    for(i=0;i<size;scanf("%d",&num),addnode(num),i++);
    start=reverse(start,NULL);
    for(printf("\n"),tptr=start;tptr;printf("%d->",tptr->data),tptr=tptr->next);
    return 0;
}

// input
// 7
// 1 2 3 4 5 6 7
// output
// 7->6->5->4->3->2->1




