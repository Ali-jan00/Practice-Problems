#include <stdio.h>
int main ()
{
int arr[]={1,25,27,1,3,11,7};
int i;
int leader=arr[6];
for(i=5; i >= 0; i--)
{
    if(leader < arr[i]) 
    {
        leader = arr[i];
    }
}
printf("the leader of array is %d", leader);
return 0;
}