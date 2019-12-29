#include <stdio.h>

struct student
{
   int no;
   int score;
}s[100];

int main()
{
    int n,i,k;
    int max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i].no);
        scanf("%d",&s[i].score);
        max=s[0].score;
        if(max<s[i].score)
        {

           k=i;
            max=s[i].score;
    
        }
    }   
    printf("%d %d",s[k].no,s[k].score);
    
    return 0;
 }
