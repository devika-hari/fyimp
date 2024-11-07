#include<stdio.h>
#include<string.h>
int main()
{
       struct student {
        char name[100];
        int mark1,mark2,roll;
           };

       struct student std[100];
       int i,n;
       printf("enter the numbers of student\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                printf("enter the student %d  name\n",i+1);
                scanf("%s",std[i].name);
                printf("enter the roll  number\n");
                scanf("%d",&std[i].roll);
                printf("enter mark 1\n");
                scanf("%d",&std[i].mark1);
                printf("enter mark 2\n");
                scanf("%d",&std[i].mark2);
        }
        for(i=0;i<n;i++)
        {
                printf("\n________________________\n");
                printf("details of student%d\n",i+1);
                printf("name;\"%s\"\n",std[i].name);
                printf("roll; %d\n",std[i].roll);
                printf("mark1; %d\n",std[i].mark1);
                printf("mark2; %d\n",std[i].mark2);
        }
}


