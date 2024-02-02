#include<stdio.h>
int main(){

    int m,n,a[20][20],i,j,sumR=0,sumC=0,sumB=0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the %d elements\n",m*n);
    for(i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered Matrix is\n");
    for(i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++) {
        sumR=0;
        for(j=0;j<n;j++) {
            sumR+=a[i][j];
        }
        if(i==0 || i==m-1){
            sumB+=sumR;
        }
        printf("Sum of Row%d = %d\n",i+1,sumR);
    }
    printf("\n");
    for(j=0;j<n;j++) {
        sumC=0;
        for(i=0;i<m;i++){
            sumC+=a[i][j];
        }
        if(j==0 || j==n-1){
            sumB+=sumC;
        }
        printf("Sum of Column%d = %d\n",j+1,sumC);
    }
    sumB=sumB-(a[0][0]+a[m-1][0]+a[0][n-1]+a[m-1][n-1]);
    printf("\nSum of Boundry Elements is %d\n",sumB);
    return 0;
}