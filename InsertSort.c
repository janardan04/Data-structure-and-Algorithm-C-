#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int size;
    int *arr;
    int length;
} arr;
void Display(arr a)
{
    printf("\nArray elements are :\n");
    for (int i = 0; i < a.length; i++)
    {
        printf("%d  ", a.arr[i]);
    }
}
int isSorted(arr a)
{
    for (int i = 0; i < a.length - 1; i++)
    {
        if (a.arr[i] > a.arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
void Rearranging(arr *a)
{
    int i = 0;
    int j = a->length - 1;
    while (i < j)
    {
        while (a->arr[i] < 0)
        {
            i++;
        }
        while (a->arr[j] >= 0)
        {
            j--;
        }
        if (i < j)
        {
            int temp = a->arr[i];
            a->arr[i] = a->arr[j];
            a->arr[j] = temp;
        }
    }
}
void InsertSort(arr *a, int x)
{
    int i = a->length - 1;
    if (a->length == a->size)
    {
        printf("\n Memory is full!!");
    }
    else
    {

        while (i >= 0 && a->arr[i] > x)
        {
            a->arr[i + 1] = a->arr[i];
            i--;
        }
        a->arr[i + 1] = x;
        a->length++;
    }
}
int main()
{
    arr a;
    int n;
    printf("enter the size  :");
    scanf("%d", &a.size);
    a.arr = (int *)malloc(a.size * sizeof(int));
    a.length = 0;
    printf("enter the Arrray Length :");
    scanf("%d", &n);
    printf("\n enter the array elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a.arr[i]);
    }
    a.length = n;
    Display(a);
    int x;
    int ch;
    printf("\n enter the element you want insert :");
    scanf("%d", &x);
    InsertSort(&a, x);
    Display(a);
    int result = isSorted(a);
    if (result == 1)
    {
        printf("\nArray is Sorted :)");
    }
    else
    {
        printf("\n Array is not sorted :(");
    }
    Display(a);
    Rearranging(&a);
    Display(a);

    free(a.arr);
}
   