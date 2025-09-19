#include<stdio.h>
void berry();
int main()
{
    int i,k;
    scanf("%d\n",&k);
    for(i=0;i<k;i++)
    {
        berry();

    }
    return 0;
}
void berry()
{
    int b,n;
    scanf("%d",&n);
    b=2*n;
    printf("%d\n",b);
}
