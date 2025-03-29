#include<stdio.h>
#include<stdbool.h>
void bubbleSort(int arr[],int n){
    for(int i=0 ; i<n-1;i++){
        for(int j =0 ; j<n-1 ; j++){
            bool flag = false;
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag = true;
            }
        }
        if(bool flag==false){
            break;
        }
    }
    return ;
}
void printArray(int arr[], int n){
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return ;
}

