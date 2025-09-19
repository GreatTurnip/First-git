#include<stdio.h>
#include<string.h>
void operation();
int main()
{
   int t;
   int i;
   scanf("%d",&t);
   for(i=0;i<t;i++)
   {
       operation();
   }

}
void operation()
  {
      char s1[11],s2[11],s3[11];
      scanf("%s %s %s",s1,s2,s3);
      char *ps1,*ps2,*ps3;
      ps1=s1;
      printf("%c",*ps1);
      ps2=s2;
      printf("%c",*ps2);
      ps3=s3;
      printf("%c\n",*ps3);
  }
