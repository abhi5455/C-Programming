#include<stdio.h>
int main(){
    int monthNum,year;
    char ch;
    do {
        printf("Enter the Month Number: ");
        scanf("%d", &monthNum);
        switch (monthNum) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("There are 31 Days in this month\n");
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("There are 30 Days in this month\n");
                break;
            case 2:
                printf("Enter the Corresponding Year: ");
                scanf("%d",&year);
                if((year%4==0 && year%100!=0)||year%400==0)
                    printf("There are 29 Days in this month\n");
                else
                    printf("There are 28 Days in this month\n");
                break;
            default:
                printf("Invalid Month Number\n");
        }
        printf("Do you Want to Check Again(Y/N): ");
        scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');

    return 0;
}