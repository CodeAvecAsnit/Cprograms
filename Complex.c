//to multiply and add two different complex numbers

#include<stdio.h>
struct complex{
    int real;
    int img;
};
struct complex a,b;
int main(){
    int mul=1;
    int m=1;
    int sum=0;
    int sumi=0;
    
    printf("first number\n");
    printf("enter the real number\n");
    scanf("%d",&a.real);
    printf("enter the imaginary part\n");
    scanf("%d",&a.img);
    
    printf("second number\n");
    printf("enter the real number\n");
    scanf("%d",&b.real);
    printf("enter the imaginary part\n");
    scanf("%d",&b.img);
    
    sum=a.real+b.real;
    sumi=b.img+a.img;

    mul=a.real*b.real+(-1*(a.img*b.img));
    m=a.real*b.img+b.real*a.img;
    
    printf("the sum is = %d + %d i \n",sum,sumi);
    
    printf("The product is = %d + %d i",mul,m);
    
return 0;  
}
