#include<stdio.h>
#include<stdlib.h>
void rotate(int arr[],int n,int r){
    int k=r%n;
    for(int i=0;i<k;i++){
        int temp=arr[0];
        for(int j=1;j<n;j++){
            arr[j-1]=arr[j];
        }
        arr[n-1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}
int main(){
    int n,arr[100],k;
    printf("Enter then size of array");
    scanf("%d",&n);
    printf("\n Enter the elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n enter the how many rotations : ");
    scanf("%d",&k);
    rotate(arr,n,k);
}