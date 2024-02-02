#include<stdio.h>
int main(){
    int biNum,diNum,a[20],i=0,num;
    printf("Enter a Decimal Integer: ");
    scanf("%d",&diNum);
    num=diNum;
    while(num!=0){
        //Converting Decimal to Binary
        a[i]=num%2;
        num/=2;
        i++;
    }
    printf("Binary Equivalent of %d is ",diNum);
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}