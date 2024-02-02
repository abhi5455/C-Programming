#include<stdio.h>
struct complex{
    int x;
    int iy;
}; 
struct complex complexSum(struct complex P,struct complex Q){
    struct complex sum;
    sum.x =P.x +Q.x;
    sum.iy =P.iy +Q.iy;
    return sum;
}
struct complex complexDiff(struct complex P,struct complex Q){
    struct complex diff;
    diff.x =P.x -Q.x;
    diff.iy =P.iy -Q.iy;
    return diff;
}
struct complex complexMult(struct complex P,struct complex Q){
    struct complex mult;
    mult.x =(P.x*Q.x)-(P.iy*Q.iy);
    mult.iy = (P.x*Q.iy)+(Q.x*P.iy);
    return mult;
}
int main(){
    int m,n,x,i,j;
    struct complex C[5],S,D,M;
    printf("Enter the RealPart of the 1st ComplexNumber: ");
    scanf(" %d",&C[0].x);
    printf("Enter the ImaginaryPart of the 1st ComplexNumber: ");
    scanf(" %d",&C[0].iy);
    printf("Enter the RealPart of the 2nd ComplexNumber: ");
    scanf(" %d",&C[1].x);
    printf("Enter the ImaginaryPart of the 2nd ComplexNumber:");
    scanf(" %d",&C[1].iy);
    printf("The 2 Complex Numbers are:\n %d + %di\n %d + %di\n",C[0].x,C[0].iy,C[1].x,C[1].iy);
    S=complexSum(C[0],C[1]);
    printf("Sum = %d + %di\n",S.x,S.iy);
    D=complexDiff(C[0],C[1]);
    printf("Difference = %d + %di\n",D.x,D.iy);
    M=complexMult(C[0],C[1]);
    printf("Product = %d + %di\n",M.x,M.iy);
    return 0;
}