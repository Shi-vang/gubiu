#include<stdio.h>
void main(){
	int n,i,arr[100],k,s=0;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++){
		arr[i]=i;
	}
	for(i=1;i<=k;i++){
		s=s+arr[i];
	}
	printf("%d",s);
}
