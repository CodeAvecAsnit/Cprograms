//to calculate the total amount using structure//
#include<stdio.h>
struct Item{
    char name[20];
    int price;
    int quantity;
    float dis;
    };
    struct Item a,b,c;
    int main(){
        int i=0;
        float total;
        float da[3];
        float ito[3];
        
        printf("first item\n");
        printf("Enter the name of the item\n");
        scanf("%s",a.name);
        printf("Enter the quantity\n");
        scanf("%d",&a.quantity);
        printf("enter the price\n");
        scanf("%d",&a.price);
        printf("enter the discount rate\n");
        scanf("%f",&a.dis);
        da[0]=a.price-a.dis*a.price/100;
        ito[0]=da[0]*a.quantity;
        
        printf("second item\n");
        printf("Enter the name of the item\n");
        scanf("%s",b.name);
        printf("Enter the quantity\n");
        scanf("%d",&b.quantity);
        printf("enter the price\n");
        scanf("%d",&b.price);
        printf("enter the discount rate\n");
        scanf("%f",&b.dis);
        da[1]=b.price-b.dis*b.price/100;
        ito[1]=da[1]*b.quantity;
        
        printf("third item\n");
        printf("Enter the name of the item\n");
        scanf("%s",c.name);
        printf("Enter the quantity\n");
        scanf("%d",&c.quantity);
        printf("enter the price\n");
        scanf("%d",&c.price);
        printf("enter the discount rate\n");
        scanf("%f",&c.dis);
        da[2]=c.price-c.dis*c.price/100;
        ito[2]=da[2]*c.quantity;
        
        for(i=0;i<3;++i){
            total=total+ito[i];
        }
        printf("the total is %f",total);
        return 0;
        
    }