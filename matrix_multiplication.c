#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the rows and columns of the first matrix :\n");
    scanf("%d %d",&a,&b);
    printf("Enter the rows and columns of the second matrix :\n");
    scanf("%d%d",&c,&d);
    int A[a][b],B[c][d],C[a][d];
    for(int i = 0; i < a; i++)
     for(int j = 0; j < d; j++)
            C[i][j] = 0;
    
    printf("Enter elements of first matrix:\n");
for(int i = 0; i < a; i++)
    for(int j = 0; j < b; j++)
        scanf("%d", &A[i][j]);

printf("Enter elements of second matrix:\n");
for(int i = 0; i < c; i++)
    for(int j = 0; j < d; j++)
        scanf("%d", &B[i][j]);

    if(b==c)
    {
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<d;j++)
            {
                for(int k=0;k<b;k++)
                {
                   C[i][j] += A[i][k]*B[k][j];
                }
            }
        }
        printf("The resultant matrix is: \n");
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<d;j++)
            {
                printf("%d ",C[i][j]);
                
            }
            printf("\n");
        }

    }
    else 
    {
        printf("this operation cannot be done");
    }

    
}