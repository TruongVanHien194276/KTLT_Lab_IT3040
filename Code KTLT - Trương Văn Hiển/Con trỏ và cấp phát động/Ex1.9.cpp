/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include<iostream>

using namespace std;
int n;
int* arr;
void printChild(int* a,int start,int end,int size){
    for(int i = start; i <= end; i++){
        cout << *(a+i) << ' ';
    }
    cout << endl;
    if (end < size - 1) printChild(a, start, end + 1, size);
    else{
        if (start < size - 1) printChild(a, start + 1, start + 1, size);
    }
}
void input(int* a, int size){
    for(int i = 0; i < size; i++){
        cin >> *(a+i);
    }
}
int main(){
    //cout << "Truong Van Hien - 20194276" << endl;
    cin >> n;
    arr = new int[n];
    input(arr, n);
    printChild(arr, 0, 0, n);
}