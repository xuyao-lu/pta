#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();

int main()
{
    struct ListNode *p, *head = NULL;

    head = createlist();
    for ( p = head; p != NULL; p = p->next )
        printf("%d ", p->data);
    printf("\n");

    return 0;
}

struct ListNode *createlist()
{
struct ListNode *head=NULL;
struct ListNode *now=NULL;
int aa;
while(1)
{
    scanf("%d",&aa);
    if(aa==-1)
        return head;
    now=(struct ListNode *)malloc(sizeof(struct ListNode));
    now->data=aa;
    now->next=head;
    head=now;

}
}
