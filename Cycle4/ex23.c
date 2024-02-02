#include<stdio.h>
int binarySearch(int a[20],int start,int end, int key){
    int mid=(start+end)/2;
    if(start<=end) {
        if (a[mid] == key) {
            return 1;
        } else if (a[mid] < key) {
            return binarySearch(a, start, mid - 1, key);
        } else if (a[mid] > key) {
            return binarySearch(a, mid + 1, end, key);
        }
    }
    else{
        return 0;
    }
}
int main(){
    int n,i,a[20],key;
    printf("How many Numbers: ");
    scanf("%d",&n);
    printf("Enter %d Numbers in Descending Order\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The Entered List is\n");
    for(i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    printf("\nEnter the Number to be searched: ");
    scanf("%d",&key);
    if(binarySearch(a,0,n-1,key)==1)
        printf("%d is Present in the list\n",key);
    else
        printf("%d is not Present in the list\n",key);
    return 0;
}