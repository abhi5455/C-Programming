#include<stdio.h>
int main(){
    int i,j,limit,flag=0;
    printf("Enter the Limit: ");
    scanf("%d",&limit);
    printf("The Prime Numbers between 1 and %d are: \n ",limit);
    for(i=2;i<=limit;i++){
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf(" %d",i);
        flag=0;
    }
    printf("\n");
    return 0;
}