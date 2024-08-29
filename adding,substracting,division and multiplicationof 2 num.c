#include <stdio.h>

int main()
{
    int choice,num1,num2;
    float res;
    printf("enter 2 numbers : \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("Choose from 1 to 4 \n1. addition \n2. substraction \n3. multiplication \n4. division \n\n");
    scanf("%d",&choice);
    
    printf("---------------------------\n");
    switch(choice){
        case 1:
            res = num1+num2;
            printf("%d + %d = %.2f",num1,num2,res);
            break;
        case 2:
            res = num1-num2;
            printf("%d - %d = %.2f",num1,num2,res);
            break;
        case 3:
            res = num1*num2;
            printf("%d * %d = %.2f",num1,num2,res);
            break;
        case 4:
            res = num1/num2;
            printf("%d / %d = %.2f",num1,num2,res);
            break;
        default :
            printf("bruh, try b/w 1 to 4 lol ");
    }
}
