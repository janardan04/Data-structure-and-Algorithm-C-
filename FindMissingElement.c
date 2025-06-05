#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int n;
    printf("\n enter the size of array : ");
    scanf("%d", &n);
    printf("\n enter the elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int Max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > Max)
        {
            Max = a[i];
        }
    }
    int hash[Max+1];
    for (int i = 0; i <=Max; i++)
    {
        hash[i] = 0;
    }
    for (int i = 0; i <n; i++)
    {
        hash[a[i]]++;
    }
    printf("\nMissing elements are : ");
    for (int i = 1; i <= Max; i++)
    {
        if (hash[i] == 0)
        {
            printf("%d  ", i);
        }
    }
    return 0;
}