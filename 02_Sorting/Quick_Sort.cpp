#include <iostream>
using namespace std;
int partition(int arr[], int lb, int ub){
    int pivot = arr[lb];
    int st = lb;
    int end = ub;
    while(st < end){
        while(st < ub && arr[st] <= pivot){
            st++;
        }
        while(arr[end] > pivot){
            end--;
        }
        if(st < end){
            swap(arr[st], arr[end]);
        }
    }
    swap(arr[lb], arr[end]);
    return end;
}

void QuickSort(int arr[], int lb, int ub){
    if(lb < ub){
        int loc = partition(arr, lb, ub);
        QuickSort(arr, lb, loc - 1);
        QuickSort(arr, loc+1, ub);
    }
}

int main(){
    int arr[] = {34,21,3,56,65,12};
    int n = 6;
    QuickSort(arr, 0, n);
    cout << "Sorted Array:\n";
    for(int i = 0; i <= 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}