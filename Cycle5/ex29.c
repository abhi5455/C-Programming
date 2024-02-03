#include<stdio.h>
int StringLen(char *S1){
    int i=0;
    while(*(S1+i)!='\0'){
        i++;
    }
    return i;
}
int StringCompare(char *S1,char *S2){
    int i=0,j=0;
    while(*(S1+i)!='\0' && *(S2+j)!='\0'){
        if(*(S1+i)>*(S2+j))
            return 1;
        else if(*(S1+i)<*(S2+j))
            return -1;
        i++,j++;
    }
    if(*(S1+i)!='\0')
        return 1;
    else if(*(S2+i)!='\0')
        return -1;
    else
        return 0;
}
void StringCopy(char *S1,char *S2){
    int i=0;
    while(*(S2+i)!='\0'){
        *(S1+i)=*(S2+i);
        i++;
    }
    *(S1+i)='\0';
}
void StringConcat(char *S1,char *S2){
    int i=0,j=0;
    while(*(S1+i)!='\0'){
        i++;
    }
    while(*(S2+j)!='\0'){
        *(S1+i)=*(S2+j);
        i++,j++;
    }
    *(S1+i)='\0';
}
int main(){
    int l1,l2,comp;
    char S1[20],S2[20];
    printf("Enter the 1st String: ");
    scanf(" %[^\n]",S1);
    printf("Enter the 2nd String: ");
    scanf(" %[^\n]",S2);
    printf("S1 = \"%s\"\n",S1);
    printf("S2 = \"%s\"\n",S2);
    l1=StringLen(S1);
    printf("Length of S1 (\"%s\") is %d\n",S1,l1);
    l2=StringLen(S2);
    printf("Length of S2 (\"%s\") is %d\n",S2,l2);
    comp=StringCompare(S1,S2);
    if(comp==0)
        printf("Both Strings are Equal\n");
    else if(comp==1)
        printf("Both Strings are not Equal & S1 is greater than S2\n");
    else
        printf("Both Strings are not Equal & S1 is less than S2\n");
    StringConcat(S1,S2);
    printf("After Concatenating S1 & S2, S1 becomes \"%s\"\n",S1);
    StringCopy(S1,S2);
    printf("After Copying S2 to S1, S1 becomes \"%s\"\n",S1);
    return 0;
}