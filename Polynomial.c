#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int coeff;
    int exp;
} term;
typedef struct
{
    int n;
    term *terms;
} poly;
void create(poly *p)
{
    printf("enter the number of terms :");
    scanf("%d", &p->n);
    p->terms = (term *)malloc(p->n * sizeof(term));

    printf("\n Enter the Terms :");
    for (int i = 0; i < p->n; i++)
    {
        printf("%d Term : ", i + 1);
        scanf("%d%d", &p->terms[i].coeff, &p->terms[i].exp);
    }
}
void display(poly p)
{
    for (int i = 0; i < p.n; i++)
    {
        if(i!=p.n-1){
        printf("%dx%d+", p.terms[i].coeff, p.terms[i].exp);
        }
        else{
             printf("%dx%d", p.terms[i].coeff, p.terms[i].exp);
        }
    }
}
poly *add(poly *p1, poly *p2)
{
    poly *sum;

    sum = (poly *)malloc(sizeof(poly));
    sum->terms = (term *)malloc((p1->n + p2->n) * sizeof(term));

    int i, j, k;
    i = j = k = 0;
    while (i < p1->n && j < p2->n)
    {
        if (p1->terms[i].exp > p2->terms[j].exp)
        {
            sum->terms[k++] = p1->terms[i++];
        }
        else if (p1->terms[i].exp < p2->terms[j].exp)
        {
            sum->terms[k++] = p2->terms[j++];
        }
        else
        {
            sum->terms[k].exp = p1->terms[i].exp;
            sum->terms[k++].coeff = p1->terms[i++].coeff + p2->terms[j++].coeff;
        }
    }
    for (; i < p1->n; i++)
    {
        sum->terms[k++] = p1->terms[i];
    }

    for (; j < p2->n; j++)
    {
        sum->terms[k++] = p2->terms[j];
    }

    sum->n = k;
    return sum;
}
int main()
{

    poly p1, p2, *p3;
    create(&p1);
    create(&p2);

    p3 = add(&p1, &p2);
    printf("\n");
    display(p1);
    printf("\n");
    display(p2);
    printf("Addition is : \n");
    display(*p3);

    free(p1.terms);
    free(p2.terms);
    free(p3->terms);
    free(p3);
    return 0;
}