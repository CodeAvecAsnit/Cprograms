//to create structure date with mm,dd and yy and structure employee with id,name,salary,enroll date.intialize desired value to employee structure variable and display them//

#include<stdio.h>
    
    struct employee{
        char name[20];
        int id;
        int salary;
    };
        struct date{
        int year;
        int month;
        int day;
    };
    
         struct employee a,b,c;
         struct date aa,bb,cc;
        
            int main(){
                
                printf("first employee\n");
                printf("enter the name of the employee\n");
                scanf("%s",a.name);
                printf("id??\n");
                scanf("%d",&a.id);
                printf("salary?\n");
                scanf("%d",&a.salary);
                printf("enter the date joined\n");
                scanf("%d",&aa.year);
                printf("enter the month\n ");
                scanf("%d",&aa.month);
                printf("enter the day\n");
                scanf("%d",&aa.day);
                
                printf("second employee\n");
                printf("enter the name of the employee\n");
                scanf("%s",b.name);
                printf("id??\n");
                scanf("%d",&b.id);
                printf("salary?\n");
                scanf("%d",&b.salary);
                printf("enter the date joined\n");
                scanf("%d",&bb.year);
                printf("enter the month \n");
                scanf("%d",&bb.month);
                printf("enter the day\n");
                scanf("%d",&bb.day);
                
                printf("third employee\n");
                printf("enter the name of the employee\n");
                scanf("%s",c.name);
                printf("id??\n");
                scanf("%d",&c.id);
                printf("salary?\n");
                scanf("%d",&c.salary);
                printf("enter the date joined\n");
                scanf("%d",&cc.year);
                printf("enter the month\n ");
                scanf("%d",&cc.month);
                printf("enter the day\n");
                scanf("%d",&cc.day);
                
                printf("name : %s\n",a.name);
                printf("%d$\n",a.salary);
                printf("date joined: %d:%d:%d\n",aa.year,aa.month,aa.day);
                
                                
                printf("name : %s\n",b.name);
                printf("%d$\n",b.salary);
                printf("date joined: %d:%d:%d\n",bb.year,bb.month,bb.day);
                                
                                
                printf("name : %s\n",c.name);
                printf("%d$\n",c.salary);
                printf("date joined: %d:%d:%d\n",cc.year,cc.month,cc.day);
            }