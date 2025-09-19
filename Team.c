#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,p,v,t,number;
    number=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d%d%d",&p,&v,&t);
            if(p==v||v==t||t==p){
               number=number +1;

            }
        }
    }
    printf("%d",number);
}
