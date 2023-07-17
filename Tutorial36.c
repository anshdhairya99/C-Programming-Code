#include<stdio.h>
void main()
{
    int arr[6] = {1,2,3,4,5,6,};
    int i,j;
    printf("The array before the reversal is %d\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("The array after the reversal is %d\n");
    for (int i = 5; i >=0; i--)
    {
        printf("%d\n",arr[i]);
    }
    
    
    return 0;
    
}