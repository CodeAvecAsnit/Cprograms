//The matrix finds the transpose of a 3x3 matrix

#include<stdio.h>
int main(){
    int a[3][3];
    int i=0;
    int j=0;
    printf("Enter the data in matrix : \n");
    for(i=0;i<3;++i){
        for(j=0;j<3;++j){
        printf("a[%d,%d] : ",i+1,j+1);
         scanf("\t%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix is:\n");
    for(i=0;i<3;++i){
        for(j=0;j<3;++j){
            printf("\t%d",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}