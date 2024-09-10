#include <stdio.h>
int main()
{
int num1,num2,num3;
printf("enter any 3 number : \n");
scanf("%d %d %d",&num1,&num2,&num3);
if(num1>=num2 && num1>=num3)
{
    printf("%d is greator",num1);
}
else if(num2>=num1 && num2>=num3)
{
    printf("%d is greator",num2);
}
else
{
    printf("%d is greator",num3);
}
}

