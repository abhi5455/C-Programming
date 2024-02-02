#include<stdio.h>
int main(){
    int i,j,limit,sum=0;
    printf("Enter the Limit: ");
    scanf("%d",&limit);
    printf("The Perfect Numbers between 1 and %d are: \n ",limit);
    for(i=2;i<=limit;i++){
        for(j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i)
            printf(" %d",i);
        sum=0;
    }
    printf("\n");
    return 0;
}