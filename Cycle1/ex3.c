#include<stdio.h>
int main(){
    int a,b,x,y,t,gcd,lcm;
    printf("Enter 2 Numbers: ");
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    while(y!=0){
        t=y;
        y=x%y;
        x=t;
    }
    gcd = x;
    lcm = (a*b)/gcd;
    printf("The GCD and LCM of %d and %d is:\n GCD: %d\n LCM: %d",a,b,gcd,lcm);
    return 0;
}
