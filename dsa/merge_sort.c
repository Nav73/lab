//merge sort 
#include <stdio.h>

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    int size1 = (mid-s+1);
    int size2 = (e - mid);

    int arr1[size1];
    int arr2[size2];

    int k = s;//k is for iterating main arr
    for(int i=0; i<size1; i++){
        arr1[i] = arr[k++];
    }
    
    //k goes to mid now make it from mid+1
    k = mid+1;
    for(int j=0; j<size2; j++){
        arr2[j] = arr[k++];
    }
    for(int i=0; i<size2; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");

    //merge two sorted array
    int index1 = 0;
    int index2 = 0;
    int main_arr_index = s;
    //both arr common index
    while(index1<size1 && index2<size2){
        if(arr1[index1]<arr2[index2]){
            arr[main_arr_index++] = arr1[index1++];
        }
        else{
            arr[main_arr_index++] = arr2[index2++];
        }
    }
    //rest element of either arr
    while(index1<size1){
        arr[main_arr_index++] = arr1[index1++];
    }
    while(index2<size2){
        arr[main_arr_index++] = arr2[index2++];
    }
}
void mergeSort(int *arr, int s, int e){

    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    //left bifurcation
    mergeSort(arr, s, mid);
    
    //right bifurcation
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);

}

int main(){
    int arr[] = {34,2,53,21,35,6,42,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
