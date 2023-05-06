#include<stdio.h>
int main()
{
	int marks;
	
	printf("Enter Marks:");
	scanf("%d",&marks);
if(marks<101)
{
	if(marks<=100 && marks>85)
	{
		printf("A");
	}
	else if(marks<=84 && marks>65)
	{
		printf("B");
	}
	else if(marks<=64 && marks>50)
	{
		printf("C");
	}
	else if(marks<=49 && marks>35)
	{
		printf("D");
	}
	else
	{
		printf("Fail");
	}
}
else{
	printf("Plaese Enter valid Marks");
}
	
	
	return 0;
}
