#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a[10];
    int n;
} matrix;
void set(matrix *m, int i, int j, int k)
{
    if (i == j)
        m->a[i] = k;
}
int get(matrix m, int i, int j)
{
    if (i == j)
    {
        return m.a[i - 1];
    }
    else
    {
        return 0;
    }
}
void display(matrix m)
{
    int i, j;
    for (i = 0; i < m.n; i++)
    {
        for (j = 0; j < m.n; j++)
        {
            if (i == j)
            {
                printf("%d ", m.a[j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int main()
{
    matrix m1;
    m1.n = 4;

    set(&m1, 0, 0, 5);
    
set(&m1,1,1,3);
    set(&m1, 2, 2, 9);

    set(&m1, 3, 3, 7);

    set(&m1, 4, 4, 10);
    int result =get(m1,3,3);
    // get() return 0;
    display(m1);
    printf("%d",result);
}
