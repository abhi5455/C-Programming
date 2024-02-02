#include<stdio.h>
int main(){
    int n,a[20],i,key,position=-1,top=0,bot,mid;
    printf("How Many Numbers are there: ");
    scanf("%d",&n);
    printf("Enter %d Numbers in Ascending Order\n",n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    printf("The Entered Numbers are: ");
    for(i=0;i<n;i++) {
        printf(" %d", a[i]);
    }
    printf("\nEnter the Number to be searched: ");
    scanf(" %d",&key);
    bot=n-1;
    while(top<=bot){
        mid=(top+bot)/2;
        if(key<a[mid]){
            bot=mid-1;
        }
        else if(key>a[mid]){
            top=mid+1;
        }
        else{
            position=mid+1;
            break;
        }

    }
    if(position==-1)
        printf("Element %d Not Found\n",key);
    else
        printf("Element %d Found at Position %d\n",key,position);
    return 0;
}