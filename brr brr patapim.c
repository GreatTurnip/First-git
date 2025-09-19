
#include<stdio.h>
#include<string.h>
void operation();
int main()
{
    int t,i;
    int isvalid=1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
         operation();
    }
}
void operation()
{
    char p[100],s[100];
    gets(p);
    gets(s);
    char *pp=p;
    char *ps=s;
    while(*pp!="\0")
    {

         if(*pp!=*ps){


            isvalid=0;
         break;}
         *ps++;
          if (*ps == *pp) {
            ps++;
        }

        pp++;
    }

    if (*ps != '\0') {
        isvalid = 0;
    }

    if (isvalid)
        printf("YES\n");
    else
        printf("NO\n");
}




