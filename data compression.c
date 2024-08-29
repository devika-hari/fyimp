#include <stdio.h>
#include<string.h>
int main()
{
char string[20] = "aaabbbccc";
int i,count,length = strlen(string);
for(i=0;i<length;i++)
{
    count = 1;
    while(i+1<length && string[i] ==string[i+1])
    {
        count++;
        i++;
    }
    printf("%c%d",string[i],count);
}
}
