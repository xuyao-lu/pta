# include<stdio.h>
int Bsearch(int *p, int n, int x);     
int main(void)   
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};    
    int x, m;
    scanf("%d",&x);                
    m = Bsearch(a, 10, x);
    if(m >= 0)   
        printf("Index is %d\n",m);
    else 
        printf( "Not Found\n");
		
    return 0;

}
int Bsearch(int *p, int n, int x)
{
	int max=n-1, min=0, middle;
	middle = (min + max) / 2;
	while (min <= max) {
		if (p[middle] == x) {
			break;
		}
		else if (p[middle] < x) {
			min = middle + 1;
		}
		else {
			max = middle - 1;
		}
		middle = (min + max) / 2;
	}
	if (min <= max) {
		return middle;
	}
	else {
		return -1;
	}
}
