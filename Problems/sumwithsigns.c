#include <stdio.h>
int main ()
{
    int i;
    int N;
    int strt;
    int end;
        printf("\tPrinting the subb arrays:");
        printf("\nEnter the size of array");
         scanf("%d", &N);
    int arr[N];
    for(i=0; i<N; i++)
    {
        printf("\nEnter the Numbers:");
        scanf(" %d", &arr[i]);
    }
    for(strt=0; strt<N; strt++)
    {
        for(end=strt; end<N; end++)
        {
          printf(", %d", arr[end]);
        }
        printf("\n");
    }
return 0;
}