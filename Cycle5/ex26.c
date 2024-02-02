#include<stdio.h>
struct student{
    int regno;
    char name[20];
    float mark1,mark2,mark3,mark4,totalmark;
};
void sortStruct(struct student S[20],int n){
    int i,j;
    struct student temp;
    for(i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if(S[j].totalmark > S[j+1].totalmark){
                temp=S[j];
                S[j]=S[j+1];
                S[j+1]=temp;
            }
        }
    }
}
int main(){

    int n,i,j;
    struct student S[20];
    printf("Enter the total Number of Students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the Register Number of the Student: ");
        scanf("%d",&S[i].regno);
        printf("Enter the Name of the Student: ");
        scanf(" %[^\n]",S[i].name);
        printf("Enter the mark1,mark2,mark3 and mark4 of the Student: ");
        scanf("%f %f %f %f",&S[i].mark1,&S[i].mark2,&S[i].mark3,&S[i].mark4);
        S[i].totalmark=(S[i].mark1+S[i].mark2+S[i].mark3+S[i].mark4);
    }
    sortStruct(S,n);

    printf("\nThe Entered Details are:\n\n");
    for(i=n-1;i>=0;i--){
        printf("Register Number: %d\n", S[i].regno);
        printf("Name: %s\n", S[i].name);
        printf("Mark1: %.2f\nMark2: %.2f\nMark3: %.2f\nMark4: %.2f\n", S[i].mark1, S[i].mark2, S[i].mark3, S[i].mark4);
        printf("Total Marks: %.2f\n", S[i].totalmark);
        printf("\n");
    }
    return 0;
}