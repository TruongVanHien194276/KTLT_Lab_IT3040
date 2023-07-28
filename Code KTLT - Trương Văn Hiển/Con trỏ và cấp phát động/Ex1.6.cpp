/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include<iostream>
using namespace std;

void reversearray(int arr[], int size){
    int l = 0, r = size - 1, tmp;
    for(int i = l; i <= r/2; i++){
        tmp = arr[i];
        arr[i] = arr[r-i]; 
        arr[r-i] = tmp;
    }
}

void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;
    for(int i = l; i<= r/2; i++){
        tmp = arr[i];
        arr[i] = arr[r-i]; 
        arr[r-i] = tmp;
    }
}

int main(){
    //cout << "Truong Van Hien - 20194276" << endl;
    int arr[] = {9, 3, 5, 6, 2, 5};
    reversearray(arr, 6);
    for(int i = 0; i < 6; i++) cout << arr[i] << " ";
    int arr2[] = {4, -1, 5, 9};
    ptr_reversearray(arr2, 4);
    for(int i = 0; i < 4; i++) cout << arr2[i] << " ";
}