#include<stdio.h>
 
void main() 
{
    int a[100],reverse[100],i,n;
 
    printf("\nEnter no of elements\n");    
    scanf("%d",&n);
    
    printf("Enter the elements\n");
    for (i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
 
    for(i=0;i<n;i++)
    {
        reverse[i]=a[n-i-1];
    }
 
   printf("\nOn reversing the array elements we get\n");
   for(i=0;i<n;i++) 
   {
      printf("%d ",reverse[i]);
   }
}
