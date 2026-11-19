#include <iostream>
using namespace std;
int main(){
    int row, col, key;
    cout<< "Enter of Matrix";
    cin>> row >> col;
    int mat[row][col] ;
    cout<< "Enter Elements:\n";
    for( int i = 0; i < row; i++){
        for( int j = 0; j < col; j++){
            cin >>mat[i][j];
        }
        
    }
    for( int i = 0; i < row; i++){
        for( int j = 0; j < col; j++){
            cout << mat[i][j]<< " ";
        }
        cout<< endl;
    }
    
    cout<< "Enter element you want to search: ";
    cin>> key;
    for( int i = 0; i < row; i++){
        for( int j = 0; j < col; j++){
            if(mat[i][j]==key){
                cout<< i << " "<< j;
            }
            else{
                cout<<"-1 -1";
            }
        }
    }
    return 0;
}