#include<stdio.h>
#include<math.h>
int main(){
    int diNum=0,biNum,num,i=0;
    printf("Enter a Binary Number: ");
    scanf("%d",&biNum);
    num=biNum;
    while(num!=0){
        //Converting Binary Number to Decimal (Fractional part is not considered)
        if(num%10!=0 && num%10!=1){
            printf("%d is not a Binary Number",biNum);
            return 0;
        }
        diNum+=pow(2,i++)*(num%10);
        num /=10;
    }
    printf("Decimal Equivalent of %d is %d",biNum,diNum);
    return 0;
}
/*
#include<stdio.h>
#include<math.h>
int main(){
    int diNum=0,intPart,x=0,fractNum=0,y=1,digit;
    float biNum,fractPart;
    printf("Enter a Binary Number: ");
    scanf("%f",&biNum);
    intPart=(int)biNum;
    fractPart=biNum-intPart;
    printf("%d   %f",intPart,fractPart);
    printf("  %f",(fractPart/10));

    while(intPart!=0){
        //Converting Integer Part of Binary Number to Decimal
        if(intPart%10!=0&&intPart%10!=1){
            printf("%d is not a Binary intPartber",biNum);
            return 0;
        }
        diNum+=pow(2,x++)*(intPart%10);
        intPart /=10;
    }
    while(fractPart>0){
        //Converting Fractional Part of Binary Number to Decimal
        digit=fractPart*10;
        fractPart=(fractPart*10)-digit;
        fractNum+=digit/pow(2,y++);
    }
    printf("Decimal Equivalent of %f is %d",biNum,diNum);
    return 0;
}
 */