#include <stdio.h>

int main()
{
	float num1,num2,sum,sub;
	int choice;
	float avg;
	printf("1.sum\n");
	printf("2.avg\n");
	printf("3.differnce\n");
	printf("enter your choice from (1-3):");
	scanf("%d",&choice);

	printf("enter the first number");
	scanf("%f",&num1);
	printf("enter the second number");
	scanf("%f",&num2);

	switch(choice)
	{
	case 1:
		sum=num1+num2;
		printf("%f",sum);
		break;
	case 2:
		sub=num2-num1;
		printf("%f",sub);
		break;
	case 3:
		avg=num1/2;
		printf("%f",avg);
		break;
	default:
		printf("invalid number");
		break;
	}

	return 0;
}
