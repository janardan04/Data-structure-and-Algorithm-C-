#include<stdio.h>

void array(int a[],int n){
	int i;
	printf("%d",sizeof(a)/sizeof(int));

	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}
int main()
{
	int a[10],n,j;
	int r;
	printf("Enter how many arrays you want to store ?\n->");
	scanf("%d",&n);
	for(j=0;j<n;j++){
		printf("\nEnter the %d array :",j+1);
		scanf("%d",&a[j]);
	}

	printf("\n Does you want to print array's you entered\n");

	
	scanf("%d",&r);
	if(r==1 ){
		array(a,n);
	}
	else{
		printf("Okay exiting from code");

	}
	
}
