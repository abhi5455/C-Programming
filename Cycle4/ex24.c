#include<stdio.h>
void readMatrix(int a[20][20],int* m, int* n){
    int i,j;
    printf("Enter the number of rows and columns: ");
    scanf(" %d %d",m,n);
    printf("Enter the %d elements of the Matrix\n",(*m)*(*n));
    for(i=0;i<(*m);i++) {
        for (j=0;j<(*n);j++) {
            scanf(" %d", &a[i][j]);
        }
    }
}
void displayMatrix(int a[20][20],int m,int n){
    int i,j;
    //printf("The Elements of the Matrix are\n",m*n);
    for(i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
}
void multMatrix(int a[20][20],int b[20][20],int c[20][20],int m,int n, int q){
    int i,j,k,p=n;
    for(i=0;i<m;i++) {
        for (j=0;j<q;j++) {
            c[i][j] = 0;
            for (k=0;k<n;k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main(){
    int a[20][20],b[20][20],c[20][20],m,n,p,q;
    readMatrix(&a,&m,&n);
    printf("The Elements of the 1st Matrix are:\n");
    displayMatrix(a,m,n);
    readMatrix(&b,&p,&q);
    printf("The Elements of the 2nd Matrix are:\n");
    displayMatrix(b,p,q);
    if(n==p) {
        multMatrix(a, b, &c,m,n,q);
        printf("Matrix after Multiplication is\n");
        displayMatrix(c, m, q);
    }
    else{
        printf("Matrix Multiplication is Not possible\n");
    }

}