#include <iostream>
using namespace std;
int bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int selectionSortDescending(int arr[],int n){
for(int i=0;i<n-1;i++){
    int minIndex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]>arr[minIndex]){
            minIndex=j;
        }
        if(minIndex != i){
            swap(arr[minIndex],arr[i]);
            }
        }
    }
}
int insertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int temp=arr[i];
        int j=i-1;
        while(temp<arr[i] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j]=temp;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main() {
    int arr[] = {1,2,3,4,5,3,6,7,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);
    selectionSortDescending(arr,n);
    insertionSort(arr,n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
