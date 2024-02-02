#include<stdio.h>
int main(){

    int m,n,a[20][20],i,j,small,posX=0,posY=0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the %d elements\n",m*n);
    for(i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered Matrix is\n ");
    for(i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n ");
    }
    small=a[0][0];
    for(i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            if(a[i][j]<small){
                small=a[i][j];
                posX=i;
                posY=j;
            }
        }
    }
    printf("Smallest Element of the Matrix is %d at position(%d,%d)",small,posX+1,posY+1);
    return 0;
}