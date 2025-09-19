#include<stdio.h>
int main()
{
    int arr[1000];
    int n;
    scanf("%d",&n);
    for (int i=0 ; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for( int i=0; i<n; i++)
    {
        int current = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>current)
        {
            arr[j+1]= arr[j];
            j=j-1;
        }
        arr[j+1]=current;
    }
     for (int i=0 ; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}