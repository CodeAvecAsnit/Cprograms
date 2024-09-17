//The code converts the Uppercase into lowercase and vice versa

#include<stdio.h>
#include<string.h>
int main(){
    int a,b,i;
    char m[20],n[20];
    printf("Enter the string\n");
    scanf("%s",m);
    b=strlen(m);
    for(i=0;i<b;++i){
        a=("%d",m[i]);
        if(a>=65&&a<=82){
            a=a+32;
        }
        else if(a>=97 && a<=123){
            a=a-32;
        }
        n[i]=("%c",a);
        printf("%c",n[i]);
    }
    return 0;
}