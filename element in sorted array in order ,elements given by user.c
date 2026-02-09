#include<stdio.h>
int main()
int arr[10],n,value,i;
printf("Enter number of elements (max 6):");
scanf("%d",&n);
printf("enter %d sorted elements:\n,n");
for(i=0;i,n;i++){
scanf("%d",&arr[i]);
}
printf("enter elements to an array to insert");
scanf("%d",&value);
for(i=n-1;i>=0&& arr[i]>value;i--){
arr[i+1]=arr[i];
}
arr[i+1]=value
n++;
printf("array after insertion:");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
return 0;
