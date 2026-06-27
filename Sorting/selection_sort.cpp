#include <iostream>
using namespace std;
void selectionsort(int arr[],int n){
    
    for(int i=0;i<=n-2;i++){
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[i]){
                //Swap(arr[i],arr[j])
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]= temp;
            }
            
        }
    }
}
int main(){
    int arr[6]={34,21,13,7,90,14};
    int n= sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
     
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    return 0;
}