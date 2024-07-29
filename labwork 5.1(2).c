#include<stdio.h>

main()
{
	int a;
	printf("value of a=");
	scanf("%d",&a);
	if(a>0)
	{
		printf("it is positive number");
	}
	else if(a == 0)
	{
		printf("it is neutral number");
	}
	else
	{
		printf("it is nagative number");
	}
}