#include<stdio.h>
void fun(int n){
	if(n>0){

		fun(n-1);
		printf("%d\n",n);
	}
}
int main(){
	int x = 10000;
	fun(x);
	return 0;
}

