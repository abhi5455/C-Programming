#include<stdio.h>
int findLarge(int a[20],int n){
    int large=a[0],i;
    for(i=0;i<n;i++){
        if(a[i]>large){
            large=a[i];
        }
    }
    return large;
}
int main(){
    int m,n,a[20][20],i,j,flag=0,rLarge;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the %d Elements\n",m*n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf(" %d",&a[i][j]);
        }
    }
    printf("The Entered Matrix is\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        rLarge=findLarge(a[i],n);
        printf("The Largest Element in Row%d is %d\n",i,rLarge);
    }
    return 0;
}