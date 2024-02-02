#include<stdio.h>
int main(){
    int n,a[20],i,key,position=-1;
    printf("How Many Numbers are there: ");
    scanf("%d",&n);
    printf("Enter %d Numbers\n",n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    printf("The Entered Numbers are: ");
    for(i=0;i<n;i++) {
        printf(" %d", a[i]);
    }
    printf("\nEnter the Number to be searched: ");
    scanf(" %d",&key);
    for(i=0;i<n;i++){
        if(key==a[i]){
            position=i;
            break;
        }
    }
    if(position==-1)
        printf("Element %d Not Found\n",key);
    else
        printf("Element %d Found at Position %d\n",key,position+1);
    return 0;
}