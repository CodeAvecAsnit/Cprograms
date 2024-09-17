#include <stdio.h>
int a(int aa);
int b(int bb);

int main() {
    int aa,bb;
    int i=0;
    int j=0;
    int n=0;
    int d[10];
    int e[10];
    int f[10];
    printf("enter two numbers");
    scanf("%d%d",&aa,&bb);
    for(i=0; i<10;++i){
        d[i]=a(aa);
    }
    for(j=0;j<10;++j){
        e[i]=b(bb);
    }
for(i=0;i<10;++i){
    for (j=0;j<10;++j){
        if(d[i]=e[i]){
            d[i]=f[n];
            n=n+1;
        }
    }
}
printf("\n the hcf is %d",f[n]);
}

int a(int m){
    int iii=0;
    for(iii=0;iii<=m;++iii){
        if(m%iii==0){
            return iii;
        }
    }
}
int b(int q){
    int ii=0;
    for(ii=0;ii<=q;++ii){
        if(q%ii==0){
            return ii;
        }
    }
}
