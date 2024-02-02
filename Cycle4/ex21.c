#include<stdio.h>
int fact(int num){
    if(num==0 || num==1)
        return 1;
    else
        return num*fact(num-1);
}
int main(){
    int n,r;
    printf("Enter the value of 'n' and 'r': ");
    scanf("%d %d",&n,&r);
    printf("%dC%d = %d",n,r,(fact(n)/(fact(r)*fact(n-r))));
    return 0;
}