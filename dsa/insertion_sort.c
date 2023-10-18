//insertion sort
#include <stdio.h>

void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    //int arr[] = {34,2,53,21,35,6,42,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        int j=i;
        while(arr[j]<arr[j-1] && j>0){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    printarr(arr,n);
return 0;
}
