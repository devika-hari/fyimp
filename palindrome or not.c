#include <stdio.h>
#include <string.h>
int main()
{
    int i,l;
    char str[100],rev[100],temp;
    printf("enter a palindrome");
    scanf("%s",str);
    
    strcpy(rev,str);
    l=strlen(str);
    
    
    
    for(i=0;i<=l/2;i++){
        temp=rev[i];
        rev[i]=rev[l-1-i];
        rev[l-1-i]=temp;
        
    }
    if(strcmp(rev,str)==0){
        printf("it is a palindrome");
    }
    else{
        printf("it s not a palindrome");
    }
}
