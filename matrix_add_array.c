#include <stdio.h>
int main()
{
    int fr,fc,sr,sc;
    printf("\n");
    printf("Welcome!\n");
    printf("\n");
    printf("Matrix-1\n");
    scanf("%d %d",&fr,&fc);
    int arr[fr][fc];
    for (int i = 0; i < fr; i++)
    {
        for (int j = 0; j < fc; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("Matrix-2\n");
    scanf("%d %d",&sr,&sc);
    int brr[sr][sc];
    for (int i = 0; i < sr; i++)
    {
        for (int j = 0; j < sc; j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\n");
    printf("Matrix-1+2\n");
    for (int i = 0; i < fr; i++) {
        for (int j = 0; j < fc; j++) {
            printf("%d ", arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Thank you!!\n");
    return 0;
}
