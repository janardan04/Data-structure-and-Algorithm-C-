#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *a;
    int size;
    int length;
} Array;
void display(Array arr)
{
    printf("\n elements are :");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d  ", arr.a[i]);
    }
}
void append(Array *arr)
{
    int n;
    printf("\n enter the element: ");
    scanf("%d", &n);
    arr->a[arr->length] = n;
    arr->length++;
}
void insert(Array *arr)
{
    int x, n;
    printf("\n enter the index and element :");
    scanf("%d%d", &x, &n);
    for (int i = arr->length; i > x - 1; i--)
    {
        arr->a[i] = arr->a[i - 1];
    }
    arr->a[x - 1] = n;
    if (arr->a[x - 1] == n)
    {
        printf("\nsuccessfully inserted the element at the %d index", x);
    }
    else
    {
        printf("\n Error to insert the element at the index %d", x);
    }
    arr->length++;
}
int main()
{
    Array arr;
    int n;
    printf("\n enter the size:");
    scanf("%d", &arr.size);

    arr.a = (int *)malloc(arr.size * sizeof(int));

    arr.length = 0;
    printf("\nenter the how many numbers:\n");
    scanf("%d", &n);
    printf("\n enter the elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr.a[i]);
    }

    arr.length = n;
    int choice;
    do
    {
        printf("\n\n1.Display\n2.Append\n3.Insert");
        printf("\nenter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display(arr);
            break;

        case 2:
            append(&arr);
            break;

        case 3:
            insert(&arr);
            break;

        case 5:
            printf("\nexiting!!");
            break;
            
        default:
            printf("\nYou enter the wrong choice");
        }
    } while (choice != 5);
    // display(arr);
    return 0;
}