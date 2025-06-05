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
    if (x > 0 && arr->length >= x)
    {
        for (int i = arr->length; i > x - 1; i--)
        {
            arr->a[i] = arr->a[i - 1];
        }
        arr->a[x - 1] = n;
    }
    if (arr->a[x - 1] == n)
    {
        printf("\nsuccessfully inserted the element at the %d index", x);
        arr->length++;
    }
    else
    {
        printf("\n Error to insert the element at the index %d", x);
    }
}
void Delete(Array *arr)
{
    int n;
    int x;
    int index = -1;
    printf("\n enter the number you want to delete :");
    scanf("%d", &n);
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->a[i] == n)
        {
            index = i;
            break;
        }
    }
    if (index >= 0 && index <= arr->length - 1)
    {
        x = arr->a[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->a[i] = arr->a[i + 1];
        }
        arr->length--;
        printf("\nsuccefully deleted the %d", x);
    }
    else
    {
        printf("\nplease enter the valid number");
    }
}
void Search(Array *arr)
{
    int key;
    printf("enter the element you want to search : ");
    scanf("%d", &key);
    int position = -1;
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->a[i] == key)
        {
            position = i + 1;
            // transposition if users the same element more time then for reducing he time
            int temp = arr->a[i - 1];
            arr->a[i - 1] = arr->a[i];
            arr->a[i] = temp;
            break;
        }
    }
    if (position == -1)
    {
        printf("\n The element is not found !");
    }
    else
    {
        printf("\n Element found at Position %d ", position);
    }
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
        printf("\n\n1.Display\n2.Append\n3.Insert\n4.Delete\n5.Check Length \n6.check size \n7.Search \n8.Exit");
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
        case 4:
            Delete(&arr);
            break;
        case 5:
            printf("%d", arr.length);
            break;
        case 6:
            printf("%d", arr.size);
            break;
        case 7:
            Search(&arr);
            break;
        case 8:
            printf("\nexiting!!");
            break;
        default:
            printf("\nYou enter the wrong choice");
        }
    } while (choice != 8);
    free(arr.a);

    return 0;
}