#include<stdio.h>
int main(){
    int i=0,j,freq=0,freq2;
    char str[50], ch='\0';
    printf("Enter the Line\n");
    scanf("%[^\n]",str);
    while(str[i]!='\0'){
        j=i,freq2=0;
        while(str[j]!='\0'){
            if(str[i]==str[j]){
                freq2++;
            }
            j++;
        }
        if(freq2>freq && ((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))){
            ch=str[i];
            freq=freq2;
        }
        i++;
    }
    if(ch=='\0')
        printf("There is no Alphabet in the given Line\n");
    else
        printf("The Highest repeating Alphabet in the given line is '%c' and its Frequency is %d\n",ch,freq);
}