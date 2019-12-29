#include<stdio.h>
int main()
{
int i,j=0;
char a[4][20],b[20];
for(i=0;i<4;i++){
scanf("%s",&a[i]);
b[j++]=a[i][0];
b[j++]=a[i][1];
}
printf("%s",b);
return 0;
}
