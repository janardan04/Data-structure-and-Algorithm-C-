#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool issort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
    }
    return true;
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
    if (issort(a, n))
    {
        printf("\nArray is sorted ");
    }
    else
    {
        printf("\n Array is not Sorted");
    }
}