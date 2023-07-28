/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include<iostream>

using namespace std;

int counteven(int* arr, int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            count += 1;
        }
    }
    return count;    
}

int main(){
    //cout << "Truong Van Hien - 20194276" << endl;
    int arr[] = {1, 5, 4, 8, 10, 6, 7, 2};
    cout << counteven(arr, 8);  
}