//The program encrptes the given String by changing the ascii code and also the decryptes it

#include<stdio.h>
#include<string.h>
int main(){
    int am,len,as,i,f;
    char a[100],n[100],m[100];
    label_1:
    printf("Plese enter a number below:\n1 = encryption\n2 = decrption\n");
    scanf("%d",&am);
    printf("Enter the word\n");
    
    scanf("%s",a);
    len=strlen(a);
    if (am==1){

    printf("The encrypted string is : ");
        for(i=0;a[i]!='\0';++i){
            as=("%d",a[i]);
            if(as>=65 && as<=90){
            as=as+32;
             }
             else if(as>=97 && as<=122){
                 as = as-32;
             }
             n[i]=("%c",as); 
}
for(i=0;n[i]!='\0';++i){
    f=("%d",n[i]);
    f=f+3;
    m[i]=("%c",f);
    printf("%c",m[i]);
}

}
else if(am==2)
 {
    printf("The decrpted string is : ");
    for(i=0;a[i]!='\0';++i){
    f=("%d",a[i]);
    f=f-3;
    m[i]=("%c",f);
    }
    for(i=0;a[i]!='\0';++i){
            as=("%d",m[i]);
            if(as>=65 && as<=90){
            as=as+32;
             }
             else if(as>=97 && as<=122){
                 as = as-32;
             }
             n[i]=("%c",as);
             printf("%c",n[i]);
             }    
}
else{
    printf("\n Error");
    goto label_1;
} 
return 0;
}