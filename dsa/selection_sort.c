//selection sorting
#include <stdio.h>

void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
int main() {
    //int arr[] = {64, 25, 12, 22, 11};
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++){
        int min_i = i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[min_i]){
                min_i = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_i];
        arr[min_i] = temp; 
        printf("\n");
    }
    printarr(arr,n);
    return 0;
}
