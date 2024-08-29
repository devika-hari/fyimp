#include <stdio.h>

int main()
{
    printf("enter a number : ");
    int n,i,multi;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        multi = n*i;
        printf("%d x %d = %d \n",n,i,multi);
    }
}
