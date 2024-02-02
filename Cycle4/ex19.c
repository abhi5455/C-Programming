#include<stdio.h>
int isPrime(int x){
    if(x<2){
        return 0;
    }
    for(int i=2;i<=x/2;i++){
        if( x%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int m,n,a[20][20],i,j,flag=0;
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
            if(isPrime(a[i][j])){
                //Checking whether any Prime Number is Present
                flag=1;
            }
        }
        printf("\n");
    }
    if(flag==0){
        printf("There are no Prime Numbers in the given Matrix\n");
        return 0;
    }
    printf("Prime Numbers in the Matrix are:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(isPrime(a[i][j])){
                printf(" %d",a[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}