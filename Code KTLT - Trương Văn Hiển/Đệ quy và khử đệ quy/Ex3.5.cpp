/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include <iostream>

using namespace std;

int b[1000][1000] = {0};

int binom(int n, int k) {
    if (k > n) return 0;
    if (k == 0) return 1;
    return binom(n-1, k) + binom(n-1, k-1);
}

int binom2(int n, int k){
    if (k > n || k == 0) return b[n][k];
    
    b[n][k] = b[n-1][k] + b[n-1][k-1];
    return b[n][k];
}

int main() {
    int m;
    cin >> m;
    for (int n = 1; n <= m; ++n){
        for (int k = 0; k <= n; ++k)
            printf("%d ", binom(n, k));
        printf("\n");
    }

    for(int i = 1; i <= m; i++){
        b[i][0] = 1;
        b[0][i] = 1;
    }
    for (int n = 1; n <= m; ++n){
        for (int k = 0; k <= n; ++k)
            printf("%d ", binom2(n, k));
        printf("\n");
    }
    return 0;
}