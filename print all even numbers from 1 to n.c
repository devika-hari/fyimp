#include <stdio.h>

int main()
{
    printf("enter a number");
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2 ==0){
        printf("%d\n",i);
        }
    }
}
