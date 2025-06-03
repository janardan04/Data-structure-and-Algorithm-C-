#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int size;
    int *arr;
    int *arr2;
    int length1;
    int length2;
} Merge;

void Display(Merge A1)
{
    printf("\n array's are :\n");
    for (int i = 0; i < A1.length1; i++)
    {
        printf("%d  ", A1.arr[i]);
    }
    printf("\n\n");
    for (int i = 0; i < A1.length2; i++)
    {
        printf("%d  ", A1.arr2[i]);
    }
}
void Merging(Merge *a)
{
    int i, j, k;
    i = j = k = 0;
    int totallength = a->length1 + a->length2;

    int *arr3 = (int *)malloc(totallength * sizeof(int));
    while (i < a->length1 && j < a->length2)
    {
        if (a->arr[i] < a->arr2[j])
        {
            arr3[k++] = a->arr[i++];
        }
        else
        {
            arr3[k++] = a->arr2[j++];
        }
    }
    for(;i<a->length1;i++){
            arr3[k++]=a->arr[i];
        }
        
        for(;j<a->length2;j++){
            arr3[k++]=a->arr2[j];
        }
        printf("\n\n");
        for(int n=0;n<totallength;n++){
            printf("%d  ",arr3[n]);
        }
}
int main()
{
    Merge a;
    int n;
    printf("Enter the size of Memory    : ");
    scanf("%d", &a.size);
    a.arr = (int *)malloc(a.size * sizeof(int));
    a.arr2 = (int *)malloc(a.size * sizeof(int));
    printf("\n Enter the length of First array : ");
    scanf("%d", &a.length1);
    printf("\nNeter the length of second array");
    scanf("%d", &a.length2);
    printf("\n enter the first array elements :");
    for (int i = 0; i < a.length1; i++)
    {
        scanf("%d", &a.arr[i]);
    }
    printf("\n Enter the second array elements :");
    for (int i = 0; i < a.length2; i++)
    {
        scanf("%d", &a.arr2[i]);
    }
    Display(a);
    Merging(&a);
}