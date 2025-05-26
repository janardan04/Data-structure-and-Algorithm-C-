#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *q, *p;

    p = (int *)malloc(5 * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to create the memory in heap!!");
    }
    else
    {
        printf("Successfully created memeory in heap!!!\n\n");
    }
    printf("Enter the array elements :\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("\n\nElemnts are ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d      ", p[i]);
    }
    int s;

    printf("\n\n Does you want to create the array with big size with previous data and want to enter more elements ? if then press 1 else then press 0\n");
    scanf("%d", &s);

    if (s == 1)
    {
        int n;
        printf("\nEnter the size of memory:");
        scanf("%d", &n);
        q = (int *)malloc(n * sizeof(int));
        if (q == NULL)
        {
            printf("Unable to create the memory in heap!!");
        }
        else
        {
            printf("Successfully created memeory in heap!!!\n\n");
        }
        for (int i = 0; i < 5; i++)
        {
            q[i] = p[i];
        }
        free(p);
        p=q;
        q=NULL;
        printf("new memory after with privious elements :\n ");
        for (int i = 0; i < n; i++)
        {
            printf("%d      ", p[i]);
        }
    }

    return 0;
}