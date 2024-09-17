#include<stdio.h>

int main(){

    int a[100];
    int n,j=0,i=0;
    int temp;

    label_a1:
    printf("enter the number\n");
    scanf("%d",&n);

   if(n>100){
       printf("the number should be less than 100\n");
    goto label_a1;
   }
    printf("enter the numbers\n");
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
}

printf("\nThe numbers smallest to highest are:");

for(i=0;i<n;++i){
    for(j=i+1;j<n;++j){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
    }
}

    for(i=0;i<n;++i){
        printf("\n%d",a[i]);
    }
    
    return 0;
}