//The program is designed to calaculate the determinant of a 3x3 matrix

#include<stdio.h>
int main(){
    int a[3][3];
    int i=0;
    int j=0;
    int det=0;
    int detr=0;
    int met=0;
    int determinant;
    for(i=0;i<3;++i){
        for (j=0;j<3;++j){
        printf("enter the a%d%dth element of the matrix\n",i+1,j+1);
        scanf("%d",a[i][j]);
    }
}
det= a[0][0]*(a[2][2]*a[3][3]-a[2][3]*a[3][2]);
detr=a[1][2]*(a[1][1]*a[3][3]-a[1][3]*a[3][1]);
met= a[1][3]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
determinant=det+met-detr;
printf("\n The determinant is : %d",determinant);
return 0;
}