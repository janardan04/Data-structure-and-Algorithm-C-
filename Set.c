#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int size;
    int *arr1;
    int *arr2;
    int *arr3;
    int *arr4;
    int length4;
    int length1;
    int length2;
    int length3;
} set;
void Display(set a)
{
    printf("\nArray elements of First array : \n");
    for (int i = 0; i < a.length1; i++)
    {
        printf("%d  ", a.arr1[i]);
    }
    printf("\nArray elements of Second array : \n");
    for (int i = 0; i < a.length2; i++)
    {
        printf("%d  ", a.arr2[i]);
    }
    printf("\nArray elements of Third array : \n");
    for (int i = 0; i < a.length3; i++)
    {
        printf("%d  ", a.arr3[i]);
    }
    printf("\nArray elements of Fourth array : \n");
    for (int i = 0; i < a.length4; i++)
    {
        printf("%d  ", a.arr4[i]);
    }
}
void Union(set *a)
{
    int totallength = a->length1 + a->length2;
    int *arr3 = (int *)malloc(totallength * sizeof(int));
    int i, j, k;
    i = j = k = 0;

    while (i < a->length1 && j < a->length2)
    {
        if (a->arr1[i] < a->arr2[j])
        {
            arr3[k++] = a->arr1[i++];
        }
        else if (a->arr1[i] > a->arr2[j])
        {
            arr3[k++] = a->arr2[j++];
        }
        else
        {
            arr3[k++] = a->arr1[i];
            i++;
            j++;
        }
    }
    while (i < a->length1)
    {
        arr3[k++] = a->arr1[i++];
    }
    while (j < a->length2)
    {
        arr3[k++] = a->arr2[j++];
    }
    a->arr3 = arr3;
    a->length3 = k;
}
void intersection(set *a){
    int i=0,j=0,k=0;
    int totallength = (a->length1 < a->length2) ? a->length1 : a->length2;
    int *arr4 = (int *)malloc(totallength * sizeof(int));
    while(i<a->length1 && j<a->length2){
        if (a->arr1[i] < a->arr2[j])
        {
            i++;
        }
        else if (a->arr1[i] > a->arr2[j])
        {
            j++;
        }
        else
        {
            arr4[k++] = a->arr1[i];
            i++;
            j++;
        }
    }
    a->arr4=arr4;
    a->length4=k;
}
int main()
{
    set a;
    int n;
    printf("\nEnter the size of Arrays:");
    scanf("%d", &a.size);
    a.arr1 = (int *)malloc(a.size * sizeof(int));
    a.arr2 = (int *)malloc(a.size * sizeof(int));
    printf("\n Enter the length of array1 :");
    scanf("%d", &a.length1);
    printf("\n Enter the length of array2 :");
    scanf("%d", &a.length2);
    printf("\nEnter the elements of first array    :");
    for (int i = 0; i < a.length1; i++)
    {
        scanf("%d", &a.arr1[i]);
    }
    printf("\n");
    printf("\nEnter the elements of Second array    :");
    for (int i = 0; i < a.length2; i++)
    {
        scanf("%d", &a.arr2[i]);
    }
    // Display(a);
    Union(&a);
    intersection(&a);
    Display(a);
    free(a.arr1);
    free(a.arr2);
    free(a.arr3);
    free(a.arr4);

}