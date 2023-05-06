#include<stdio.h>
int main()
{
	int i,no;
	
	printf("Enter Number:");
	scanf("%d",&no);
	
	printf("Even Number\n");
	for(i=0;i<=no;i=i+2)
	{
		printf("%d\n",i);
	}

	printf("odd Number\n");
	for(i=1;i<=no;i=i+2)
	{
		printf("%d\n",i);
	}
}
