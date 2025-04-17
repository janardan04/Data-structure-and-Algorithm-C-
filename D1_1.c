#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int roll; // 4 bytes
	char name[200];
}student;

int main(){

	int n;
	int i,j;
	printf("how many students info you want to insert :");
	scanf("%d",&n);
	student s[n];
	for( i=0;i<n;i++){
		
		printf("\nentre the roll no:");
		scanf("%d",&s[i].roll);
		printf("entre the name:");
		scanf(" %[^\n]", s[i].name);
	}
	for(j=0;j<n;j++){
		printf("\nyou enter the roll no : %d", s[j].roll );
		printf("\nyou enter the name : %s",s[j].name );	
        printf("\n\n");
	}
    printf("\nsize of student structure is : %d",sizeof(student));
	return 0;
}
