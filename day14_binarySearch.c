#include <stdio.h>
#include <stdlib.h>

int Binarysearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int index=0;
    int mid = (low + high) / 2;
    while (low <= high)
    {
         mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            index=mid;
            high = mid-1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
    }
    if(arr[index]==key){
        return index;
    }
    else{
        return -1;
    }
}
int RecursionBinarysearch(int arr[], int low, int high, int key)
{
    int mid;
    if (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid+1;
        }
        else if (arr[mid] > key)
        {
            return RecursionBinarysearch(arr, mid + 1, high, key);
        }
        else
        {
            return RecursionBinarysearch(arr, low, mid - 1, key);
        }
    }
    return -1;
}
int main()
{
    int arr[100];
    int n;
    printf("How many elements you want to add : ");
    scanf("%d", &n);
    printf("\nEnter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("enter the key");
    scanf("%d", &key);
    int pos = Binarysearch(arr, n, key);
    printf("\n%d", pos + 1);
    int low = 0;
    int nposition = RecursionBinarysearch(arr, low, n - 1, key);
    printf("\n using the recursion : %d", nposition);
}