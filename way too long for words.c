#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char words[n][1000000];
    for(i=0;i<n;i++)
    {
        scanf("%s",&words[i]);
    }
    for(i=0; i<n;i++)
    {
        int length = strlen(words[i]);
        if(length<=10)
            printf("%s\n",words[i]);
        else
        {
            char first= words[i][0];
            int middlenumber=length-2;
            char last= words[i][length-1];
            printf("%c%d%c\n",first, middlenumber ,last);
        }
    }
    return 0 ;
}
