#include<stdio.h>
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            printf("no");
            return 0;
        }
    }
    printf("yes");
}