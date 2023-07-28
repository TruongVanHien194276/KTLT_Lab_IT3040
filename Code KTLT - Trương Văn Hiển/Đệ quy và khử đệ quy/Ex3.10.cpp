/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include <bits/stdc++.h>

using namespace std;

int T, t[20][2], H, N;
int a[20], sum = 0;

void TRY(int i){
    if (i > N) {
        for (int i = 1;  i <= N; ++i){
            if (sum != H) return;
            cout << a[i];
            if (i == N) cout << endl;
        }
        return;
    }
    int old_S = sum;
    a[i] = 0;
    TRY(i+1);
    sum = old_S;

    if (sum < H) {
        a[i] = 1;
        ++sum;
        TRY(i+1);
        sum = old_S;
    }
}

int main(int argc, const char** argv) {
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> t[i][0];
        cin >> t[i][1];
    }
    for (int i = 0; i < T; i++) {
        N = t[i][0];
        H = t[i][1];
        cout << endl;
        TRY(1);
    }
    return 0;
}