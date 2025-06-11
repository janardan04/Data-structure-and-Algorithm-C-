#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int *A;
    int n;
}Matrix;
void Set(Matrix *m,int i,int j,int x){
    if(i>=j){
        m->A[i*(i-1)/2+j-1]=x;
    }
}
int Get(Matrix m,int i,int j){
    if(i>=j){
        return m.A[i*(i-1)/2+j-1];
    }
    else {
        return 0;
    }
}
void Display(Matrix m){
    for(int i=1;i<=m.n;i++ ){
        for(int j=1;j<=m.n;j++){
            printf("%3d ", Get(m,i,j));
        }
        printf("\n");
    }
}
int main(){
Matrix m;
int x;
printf("enter the dimension");
scanf("%d",&m.n);

m.A=(int *)malloc(m.n*(m.n-1)/2*sizeof(int));

printf("\n Enter the matrix ");
for(int i=1;i<=m.n;i++){
    for(int j=1;j<=m.n;j++){
        scanf("%d",&x);
        Set(&m,i,j,x);
    }
    printf("\n");
}
printf("\n");
Display(m);

}
 