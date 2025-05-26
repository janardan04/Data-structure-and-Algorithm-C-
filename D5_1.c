#include<stdio.h>
#include<stdlib.h>

struct rectangle{
    int length ;
    int breadth;
};


void changelength(struct rectangle *r1, int l)
{
    r1->length = l;
}
int  area(struct rectangle r1){
    return r1.length * r1.breadth ;
}

int main()
{
    struct rectangle r ;
    printf("Enter the length :");
    scanf("%d",&r.length);
    printf("\nEnter the breadth :");
    scanf("%d",&r.breadth);
    
    changelength(&r, 30);

    printf("\n the   length and breadth is ");
    printf("%d \n %d",r.length , r.breadth);

    printf("the area of rectangle is %d", area(r));

    printf(5 / 2);
}