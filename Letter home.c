#include<stdio.h>
#include<stdlib.h>
int max(int a, int b);
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int n,s;
    scanf("%d%d",&n,&s);
    int array[100];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
 int minpos = array[0];
int maxpos = array[0];
for (int j = 1; j < n; j++) {
    if (array[j] < minpos)
        minpos = array[j];
    if (array[j] > maxpos)
        maxpos = array[j];
}
    int dismax=abs(s-maxpos);
    int dismin=abs(s-minpos);
    int steps1=max(dismax,dismin)+abs(maxpos-minpos);
    int steps2= abs(maxpos-minpos);
    if (s >= minpos && s <= maxpos)
    printf("%d\n",steps2);
    else
     printf("%d\n",steps1);

}
return 0;
}
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
