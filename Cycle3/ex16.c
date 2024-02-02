#include<stdio.h>
int main(){

    int m,n,a[20][20],i,j,flag=0;
    printf("Enter the number of rows of a Square Matrix: ");
    scanf(" %d",&m);
    printf("Enter the %d elements\n",m*m);
    for(i=0;i<m;i++) {
        for (j=0;j<m;j++) {
            scanf(" %d", &a[i][j]);
        }
    }
    printf("The Entered Matrix is:\n");
    for(i=0;i<m;i++) {
        for (j=0;j<m;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++) {
        for(j=0;j<m;j++) {
            if (a[i][j] != a[j][i]) {
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("The Given Matrix is a Symmetric Matrix\n");
    }
    else{
        printf("The Given Matrix is Not a Symmetric Matrix\n");
        printf("Transpose of the Matrix is:\n");
        for(i=0;i<m;i++) {
            for (j=0;j<m;j++) {
                printf("%d ", a[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}