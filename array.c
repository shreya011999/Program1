#include<stdio.h>
int main ()
{
int arr[100],n,i;
printf("Enter the number of array elements: ");
scanf("%d", &n); //entering the number of elements in the array.
printf("Enter the array elements: "); //Entering the array elements
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]!=0)
{
printf("%d", arr[i]);
}
}
}
