/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include <bits/stdc++.h>

using namespace std;

#define MAX 100  

int n, c[MAX][MAX]; //# số thành phố và ma trận chi phí
int cmin = INT_MAX; //# chi phí đi lại nhỏ nhất giữa hai thành phố khác nhau
int best = INT_MAX; //# tổng chi phí nhỏ nhất cần tìm, ban đầu đặt bằng giá trị vô cùng lớn INT_MAX = 2^31-1
int curr; //# tổng chi phí tới thời điểm hiện tại
int mark[MAX]; //# đánh dấu những thành phố đã đi
int x[MAX]; //# lưu giữ các thành phố đã đi

//# Đọc dữ liệu vào
void input(){
    cin >> n;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            cin >> c[i][j];
            if (c[i][j] > 0) cmin = min(cmin, c[i][j]);
        }
    }
}

void solution(){
    if (best >= curr + c[x[n]][x[1]]){
        best = curr + c[x[n]][x[1]];
    }
}

//# Thuật toán quay lui
void TRY(int k){
    for(int i = 2; i <= n; i++){
        if (!mark[i]){
            x[k] = i;
            mark[i] = true;
            curr += c[x[k-1]][x[k]];
            
            if (k == n) solution();
            else{
                int g = curr + cmin*(n-k+1);
                if (g < best) TRY(k+1);
            }

            mark[i] = false;
            curr -= c[x[k-1]][x[k]];
        }
    }
}

int main() {
    for (int i = 0; i < MAX; i++){
        mark[i] = false;
    }
    input();
    x[1] = 1;
    TRY(2);
    cout << best;
    return 0;
}