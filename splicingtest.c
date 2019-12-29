#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2);
void printlist( struct ListNode *head )
{
     struct ListNode *p = head;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode  *list1, *list2;

    list1 = createlist();
    list2 = createlist();
    list1 = mergelists(list1, list2);
    printlist(list1);
	
    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2)
{

    int a[100];
    int num=0;
    struct ListNode *p = list1;
    while(p!=NULL)
    {
        a[num]=p->data;
        num++;
        p=p->next;
    }
    p=list2;
    while(p!=NULL)
    {
        a[num]=p->data;
        num++;
        p=p->next;
    }
    int i,j;
    for(i=0;i<num;i++)
        for(j=i;j<num;j++)
        {
            if(a[i]>a[j])
            {
                int t;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }

    struct ListNode *lnew=NULL;
    struct ListNode *lend=NULL;
struct ListNode *q;
    for(i=0;i<num;i++)
    {
        q=(struct ListNode *)malloc(sizeof(struct ListNode));
        q->data=a[i];
        if(lnew==NULL)
        {
            lnew=q;
            lnew->next=NULL;
        }
        if(lend!=NULL)
        {
            lend->next=q;
        }
        lend=q;
        lend->next=NULL;
    }
    return lnew;
}
