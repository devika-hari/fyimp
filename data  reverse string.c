#include <stdio.h>
#include <string.h>
int main()
{
// Function to reverse the string
int i,leng;
char str[100],rev[100],temp;
printf("enter a string : \n");
scanf("%s",str);

strcpy(rev,str);

 leng=strlen(str);
 
for(i=0;i<leng/2;i++){
    
    temp=rev[i];
    rev[i]=rev[leng-1-i];
    rev[leng-1-i]=temp;
    
    
    
}
printf("%s",rev);

}
