#include<stdio.h>
int main() {
    int A[20],B[20],R[30],m,n,i=0,j=0,k=0,flag = 0;
    printf("How Many Numbers are there in 1st Set: ");
    scanf("%d", &m);
    printf("Enter %d Numbers of 1st Set in Ascending Order\n",m);
    for(i=0;i<m;i++) {
        scanf("%d", &A[i]);
    }
    printf("How Many Numbers are there in 2nd Set: ");
    scanf("%d", &n);
    printf("Enter %d Numbers of 1st Set in Ascending Order\n",n);
    for(i=0;i<n;i++) {
        scanf("%d", &B[i]);
    }

    printf("\nA = {");
    for(i=0;i<m;i++) {
        printf(" %d", A[i]);
    }
    printf(" }");
    printf("\nB = {");
    for(i=0;i<n;i++) {
        printf(" %d", B[i]);
    }
    printf(" }");
    i=0,j=0;
    while(i<m && j<n){
        if(A[i]<=B[j]){
            R[k++]=A[i++];
        }
        else if(A[i]>B[j]){
            R[k++]=B[j++];
        }
    }
    while(i<m){
        R[k++]=A[i++];
    }
    while(j<n){
        R[k++]=B[j++];
    }
    printf("\nMerged List, R = {");
    for(i=0;i<k;i++) {
        printf(" %d", R[i]);
    }
    printf(" }");
    return 0;
}