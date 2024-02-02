#include<stdio.h>
int isPalindrome(char str[50],int j,int i){
    while(j<i){
        if(str[j]!=str[i])
            return 0;
        j++,i--;
    }
    return 1;
}
int main(){
    int i=0,j=0,flag=0;
    char str[50];
    printf("Enter a Line\n");
    scanf("%[^\n]",str);
    printf("Palindrome Words in the line are:\n");
    while(str[i]!='\0'){
        if(str[i]==' '){
            if(isPalindrome(str,j,i-1)){
                printf(" \"");
                while(j<i){
                    printf("%c",str[j]);
                    flag=1;
                    j++;
                }
                printf("\"");
            }
            j=i+1;
        }
        i++;
    }
    // To Check Last Word in the Line
    if(isPalindrome(str,j,i-1)) {
        printf(" \"");
        while (j<i) {
            printf("%c", str[j]);
            flag = 1;
            j++;
        }
        printf("\" ");
    }
    if(!flag)
        printf("No Palindrome Words are present");
    printf("\n");
    return 0;
}
