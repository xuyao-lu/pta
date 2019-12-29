#include <stdio.h>
struct student{
    int number[5];
    int score[4];
}a[100];
int main()
{
    int n,i,k;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    
        scanf("%d %d",&a[i].number,&a[i].score);
    int max=a[0].score;
    for(i=1;i<n;i++)
    {
        if(a[i].score>max)
        {
            k=i;
            max=a[i].score;
        }
    }
    printf ("%d %d",a[k].number,a[k].score);

       return 0;
}

