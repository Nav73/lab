//Bubble Sort
#include <stdio.h>
void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}

int main()
{
    //int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int arr[] = {12, 13, 15, 18, 47, 49};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        //it keep highest ele at right most place for every iteration of iteration
      for(int j=0; j<n-i-1; j++) 
      {
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
      }
    }
    //printing array
    printarr(arr,n);
  return 0;
}
