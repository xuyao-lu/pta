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

struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2)
{
    int num = 0;
    int temp[100];
    struct ListNode  *p = list1;
    while(p != NULL)
    {
        temp[num] = p->data;
        num++;
        p = p->next;
    }
    p = list2;
    while(p != NULL)
    {
        temp[num] = p->data;
        num++;
        p = p->next;
    }
    int i,j;
    for(i = 0; i < num; i++)
        for(j = i + 1; j < num; j++)
        {
            if(temp[i] > temp[j])
            {
                int t;
                t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
      struct ListNode  *newlist = NULL;
      struct ListNode  *endlist = NULL;
      struct ListNode  *q;
      for(i = 0; i < num; i++)
      {
          q = (struct ListNode  *)malloc(sizeof(struct ListNode));
          q->data = temp[i];
          if(newlist == NULL)
          {
              newlist = q;
              newlist->next = NULL;
          }
            if(endlist != NULL)
         {
            endlist->next = q;
         }
         endlist = q;
         endlist->next = NULL;
      }
      return newlist;
}
