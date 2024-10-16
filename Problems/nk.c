#include <stdio.h>
int main ()
{
    int N;
    int k;
    printf("\t\tthis program will tell the numbers bigger than n/k in the array pretty cool right :> ");
    printf("\nEnter the size of array: ");
    scanf("%d",&N);
    printf("\nEnter the value of K: ");
    scanf(" %d", &k);
    int arr[N];
    for(int i=0; i<N; i++)
    {
        printf("\nEnter the number: ");
        scanf(" %d", &arr[i]);
    }
    for(int l=0; l<N; l++)
    {
        if(arr[l]>(N/k))
        {
            printf(" %d",arr[l]);
        }
    }
    return 0;
}