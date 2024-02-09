#include<stdio.h>
#include<string.h>
//not completed exchangesort
int main(){
    int n,i,j;
    char str[20][20],temp[20];
    printf("Enter the Number of Students: ");
    scanf("%d",&n);
    printf("Enter the name of %d Students\n",n);
    for(i=0;i<n;i++){
        scanf(" %[^\n]",str[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++) {
            if(strcasecmp(str[j],str[j+1])>0){
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
    printf("Sorted List of Students are:\n");
    for(i=0;i<n;i++){
        printf("%s\n",str[i]);
    }
    return 0;
}