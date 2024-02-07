#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
    if(argc<2){
        printf("No numbers are entered as Command Line argument\n");
        return 0;
    }
    int large,i,current;
    large= atoi(argv[1]);
    for(i=1;i<argc;i++){
        current =atoi(argv[i]);
        if(large<current){
            large=current;
        }
    }
    printf("The Largest Number is %d\n",large);
    return 0;
}