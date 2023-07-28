/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include <iostream>
using namespace std;

template <typename V>
V arr_sum(V* a,int n1,V* b,int n2){
    V sum = 0;
    for(int i = 0;i<n1;i++){
        sum += *(a+i);
    }
    for(int i = 0;i<n2;i++){
        sum += *(b+i);
    }
    return sum;
}


int main() {
    int val;
    cin >> val;
    
    {
        int a[] = {3, 2, 0, val};
        int b[] = {5, 6, 1, 2, 7};
        cout << arr_sum(a, 4, b, 5) << endl;
    }
    {
        double a[] = {3.0, 2, 0, val * 1.0};
        double b[] = {5, 6.1, 1, 2.3, 7};
        cout << arr_sum(a, 4, b, 5) << endl;
    }

    return 0;
}