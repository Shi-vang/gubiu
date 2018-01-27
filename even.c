#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	if(a==0){
		printf("Invalid");
		return 0;
	}
	if(a%2==0){
		printf("Even");
	}
	else{
		printf("Odd");
	}
}
