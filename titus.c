#include<stdio.h>
int main ()
{
int n,i,key,found,element;
printf("enter the numb er of elements:");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter element to search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(arr[i]==key)
{
printf("element %d found at postion %d\n",key,i+1);
element = found;
break;
}
}
 if(element!=found)
 {
 printf("element %d not found in the array\n",key);
 }
 return 0;
 } 
