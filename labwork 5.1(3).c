#include<stdio.h>

main()
{
	float a,b,c,sum,average;
	printf("maths marks=");
	scanf("%f",&a);
	printf("english marks=");
	scanf("%f",&b);
	printf("science marks=");
	scanf("%f",&c);
	
	sum=a+b+c;
	printf("sum=%f\n",sum);
	
	average=sum/3;
	printf("average=%.2f",average);
}