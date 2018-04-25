#include<stdio.h>
int main()
{
	int a,num,t=0;
	scanf("%d",&a);
	num=a;
	while(num>0){
		t=t*10+num%10;
		num=num/10;
    }
	if(t==a){
		printf("yes");
	}
	else
	{
		printf("no");
	}
	 return 0;
}
