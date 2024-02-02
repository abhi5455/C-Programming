#include<stdio.h>
int main(){
    int num,temp,large,small;
    printf("How Many Numbers are there: ");
    scanf("%d",&num);
    if(num<=0){
        return 0;
    }
    printf("Enter %d Numbers\n",num);
    scanf("%d",&temp);
    large=temp;
    small=temp;
    for(int i=1;i<num;i++){
        scanf("%d",&temp);
        if(large<temp)
            large=temp;
        if(small>temp)
            small=temp;
    }
    printf(" Smallest Number: %d\n Largest Number: %d\n",small,large);
    return 0;
}