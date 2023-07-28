/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include<bits/stdc++.h>

using namespace std;

int lucas(int n){
    if (n == 0) return 2;
    if (n == 1) return 1;
    return lucas(n-1) + lucas(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << lucas(n);
    return 0;
}