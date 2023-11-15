#include <stdio.h>
int main()
{
    printf("Hello!\n");
    printf("Matrix-1\n");
    int fr,fc;
    scanf("%d%d",&fr,&fc);
    int m1[fr][fc];
    for(int i=0; i<fr; i++)
    {
        for(int j=0; j<fc; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Matrix-1\n");
    int sr,sc;
    scanf("%d%d",&sr,&sc);
    int m2[sr][sc];
    for(int i=0; i<sr; i++)
    {
        for(int j=0; j<sc; j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    for(int i=0; i<fr; i++)
    {
        for(int j=0; j<sc; j++)
        {
            int sum=0;
            for(int k=0; k<fc; k++)
            {
                sum = sum + m1[i][k]*m2[k][j];
            }
            printf("%d",sum);
        }
    }
}