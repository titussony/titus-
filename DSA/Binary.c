#include<stdio.h>
int main(){
int n,i,key,low,high,mid,found=0;
printf("enter number of elements:");
scanf("%d",&n);
int arr[n];
printf("eneter %d elemnts in sorted order:\n",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("eneter element to search:");
scanf("%d",&key);
low=0;
high =n-1;
while(low<=high){
mid=(low+high)/2;
if(arr[mid]==key){
printf("element %d found at position %d\n",key,mid+1);
found=1;
break;
}
else if(arr[mid]<key){
low=mid+1;
}
else
{
high=mid-1;
}
}
if(found==0){
printf("element %d not found in the array\n",key);
}
return 0;
}
