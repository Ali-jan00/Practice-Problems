#include <stdio.h>
int main (){
int arr[]={0,0,0,1,2,2,1,0,1,0,2};
int i;
int mid = 0;
int low = 0;
int high = 10;
int swap;

while(mid<=high)
{
    if(arr[mid]==0)
    {
      swap = arr[low];
      arr[low]=arr[mid];
      arr[mid]=swap;
      low++;
      mid++;
    }
    
    else if(arr[mid]==1)
    {
      mid++;
    }
    
    else if (arr[mid]==2)
    {
      swap = arr[mid];
      arr[mid] = arr[high];
      arr[high] = swap;
      high--;
    }
}
for(i=0;i<=10;i++)
{
printf("%d ",arr[i]);
}
return 0;
}