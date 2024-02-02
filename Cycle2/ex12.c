#include<stdio.h>
int main() {
    int A[20],B[20],m,n,i,j,flag=0;
    printf("How Many Numbers are there in 1st Set: ");
    scanf("%d", &m);
    printf("Enter %d Numbers in 1st Set\n",m);
    for(i=0;i<m;i++) {
        scanf("%d", &A[i]);
    }
    printf("How Many Numbers are there in 2nd Set: ");
    scanf("%d", &n);
    printf("Enter %d Numbers in 2nd Set\n",n);
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

    printf("\nA Union B = {");
    for(i=0;i<m;i++) {
        printf(" %d", A[i]);
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if (B[i] == A[j]) {
                flag = 1;
                break;
            }
        }
        if(flag==0){
            printf(" %d",B[i]);
        }
        flag=0;
    }
    printf(" }");

    printf("\nA Intersection B = {");
    for(i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            if(A[i]==B[j])
                printf(" %d", B[j]);
        }
    }
    printf(" }");

    printf("\nA - B = {");
    for(i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            if(A[i]==B[j]) {
                flag = 1;
                break;
            }
        }
        if(flag==0){
            printf(" %d",A[i]);
        }
        flag=0;
    }
    printf(" }\n");

    return 0;
}