#include<stdio.h>
#include<stdlib.h>

void leftshift(int arr[], int l){
int temp=arr[0];
for(int i=1;i<l;i++){
        arr[i-1]=arr[i];
   
}
arr[l-1]=temp;
for(int i=0;i<l;i++){
    printf("%d  ",arr[i]);
}
}
int main(){
    int n;
    printf("enter thee array size: ");
    scanf("%d",&n);
    int arr[100];
    printf("\n\nenter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    leftshift(arr,n);
    return 0;
}