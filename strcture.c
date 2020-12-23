#include<stdio.h>
#include<string.h>
int main()
{
    struct student{
        char name[90];
        int mark1,mark2;
        int total;
        float avg;
        char eligible[90];
    };
    struct student s[5];
    int i;

    char a[][90]={"First","Second","Third","Fourth","Fiveth"};


    for(i=0;i<5;i++)
    {
       printf("%s Student Details \n",a[i]);
       printf("Name     :");  gets(s[i].name); printf("\n");
       printf("Mark - 1 :"); scanf("%d",&s[i].mark1); printf("\n");
       printf("Mark - 2 :"); scanf("%d",&s[i].mark2); printf("\n");
       getchar();
    }
    
    
    
    for(i=0;i<5;i++)
    {
        s[i].total=s[i].mark1+s[i].mark2;
        s[i].avg=s[i].total/2;
        
        if(s[i].avg>60)
        {
            strcpy(s[i].eligible,"Eligible");
        }
        else
        {
           strcpy(s[i].eligible,"Not Eligible");   
        }
    }
    
    
    
    printf("\nName                      Mark 1   Mark 2    Total   Average    Eligible\n");
     for(i=0;i<5;i++)
     {
         printf("%10s  ",s[i].name);
         printf("%14d %5d   %5d   %7f   %7s  \n",s[i].mark1,s[i].mark2,s[i].total,s[i].avg,s[i].eligible);
     }


}