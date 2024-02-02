#include<stdio.h>
int main(){
    int n,a[20],temp,i,j;
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
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++) {
            if (a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nThe Sorted List is: ");
    for(i=0;i<n;i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}