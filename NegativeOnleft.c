#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void ToleftNegative(int arr[],int n){
    int j=n-1;
    int i=0;
    while(i<j){
        while(arr[i]<0){
            i++;
        }
        while(arr[j]>0){
            j--;
        }
        if(i<j){
            int temp= arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
int main()
{
    int n;
    // int a[50];

    printf("Enter the Size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter The Array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    ToleftNegative(a,n);
    printf("\narray :");
    for(int i=0;i<n;i++){
        printf("\n%d",a[i]);
    }


   
}