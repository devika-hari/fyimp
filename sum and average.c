#include <stdio.h>

int main()
{
    int num1,num2,sum;
    float avg;
    printf("enter the number");
    scanf("%d%d",&num1,&num2);
    sum= num1+num2;
    avg=sum/2;
    printf("sum=%d\n",sum);
     printf("average=%f",avg);

    return 0;
}
