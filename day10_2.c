#include<stdio.h>
int power(int m, int n)
{
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return power(m*m,n/2);
    }else{
        return m*power(m*m,(n-1)/2);
    }
}
int poweriteration(int m, int n){
    int exponent=m;
if(n==0){
    return 1; 
}
else{
    for(int i=1;i<n;i++){
        exponent *= m;
    }
    return exponent;
}


}
void main()
{
    int m,n;
    printf("Enter the m and n :");
    scanf("%d %d",&m,&n);

    int result = power(m,n);
    printf("the Exponent of  m and n is : %d",result);

    int result2=poweriteration(m,n);
    printf("\n %d", result2);
}