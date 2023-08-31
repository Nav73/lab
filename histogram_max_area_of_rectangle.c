#include <stdio.h>

int findFurther(int arr[],int len, int index){
    int num = 1;
    int i=index;
        while((arr[i]<=arr[++index])&&index<len){
            num++;
        }
    return num;
}
int findBack(int arr[],int len, int index){
    int num = 0;
    int i = index;
        while((arr[i]<=arr[--index])&&index>0){
            num++;
        }
    return num;
}
int main() {
    int arr[] = {1,1,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    int maxArea = 0;
    for(int i=0; i<len; i++){
        int preIndex;
        int nextIndex;
        preIndex = findFurther(arr,len, i);
        nextIndex = findBack(arr,len, i);
        int tempArea = (arr[i]*(preIndex+nextIndex));
        if(tempArea>=maxArea){
            maxArea = tempArea;
        }
    }
    printf("max Area is %d",maxArea);
    return 0;
}
