#include<stdio.h>
struct poly{
    int exp;
    int coeff;
};
int addPoly(struct poly P[20],struct poly Q[20],struct poly R[30],int m,int n){
    int i=0,j=0,k=0;
    while(i<=m && j<=n){
        if(P[i].exp>Q[j].exp){
            R[k].exp=P[i].exp;
            R[k++].coeff=P[i++].coeff;
        }
        else if(P[i].exp<Q[j].exp){
            R[k].exp=Q[j].exp;
            R[k++].coeff=Q[j++].coeff;
        }
        else{
            R[k].exp=P[i].exp;
            R[k++].coeff=P[i++].coeff + Q[j++].coeff;
        }
    }
    while(i<=m){
        R[k].exp=P[i].exp;
        R[k++].coeff=P[i++].coeff;
    }
    while(j<=n){
        R[k].exp=Q[j].exp;
        R[k++].coeff=Q[j++].coeff;
    }
    return (k-2);
}
int main(){
    int m,n,x,i,j;
    struct poly P[20],Q[20],R[30];

    printf("Enter the total Number of 1st polynomial: ");
    scanf("%d",&m);
    printf("Enter the terms in descending order of the power of variable\n");
    for(i=0;i<m;i++){
        printf("Enter the exponent: ");
        scanf("%d",&P[i].exp);
        printf("Enter the coefficient of x^%d: ",P[i].exp);
        scanf("%d",&P[i].coeff);
    }
    printf("Enter the total Number of 2nd polynomial: ");
    scanf("%d",&n);
    printf("Enter the terms in descending order of the power of variable\n");
    for(i=0;i<n;i++){
        printf("Enter the exponent: ");
        scanf("%d",&Q[i].exp);
        printf("Enter the coefficient of x^%d: ",Q[i].exp);
        scanf("%d",&Q[i].coeff);
    }

    printf("\nThe 2 Polynomials are:\nP =");
    for(i=0;i<m;i++){
        printf(" %dx^%d",P[i].coeff,P[i].exp);
        if(m!=1 && i!=m-1)
            printf(" +");
    }
    printf("\nQ =");
    for(i=0;i<n;i++){
        printf(" %dx^%d",Q[i].coeff,Q[i].exp);
        if(n!=1 && i!=n-1)
            printf(" +");
    }
    x=addPoly(P,Q,R,m,n);
    printf("\nResultant Polynomial, R =");
    for(i=0;i<x;i++){
        printf(" %dx^%d",R[i].coeff,R[i].exp);
        if(x!=1 && i!=x-1)
            printf(" +");
    }
    printf("\n");
    return 0;
}