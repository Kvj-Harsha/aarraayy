#include <stdio.h>
int main()
{
    int a;
    printf("Enter the size of array: ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++)
    {
        printf("Enter value-%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("processing....");
    int max=arr[0];
    for(int i=0; i<a; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("The max element is %d",max);
}