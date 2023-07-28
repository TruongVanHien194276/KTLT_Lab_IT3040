/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include <bits/stdc++.h>

using namespace std;

struct state{
    int i, j, old_S;
    state(int _i = 0, int _j = 0): i(_i), j(_j) {}
};

int main() {
    int n, M;
    cin >> n >> M;
    int m[n+1];
    for (int i = 1; i <= n; ++i) cin >> m[i];
    int x[n+1];
    stack<state> s;
    //# sum of selected weights
    int sum = 0;
    s.push(state(1, -1));
    while (!s.empty()){
        state &top = s.top();
        if (sum == M){
            for (int i = 1; i <= n; ++i){
                if (x[i] == -1) cout << '-' << m[i];
                if (x[i] == 1) cout << '+' << m[i];
            }
            cout << " = " << M <<endl;
            exit(0);
            s.pop();
        }

        // Khử đệ quy
        // #backtrack
        if (top.j > -1)
            sum = top.old_S;

        // #every subtree are visited
        if (top.j > 1) {
            x[top.i] = 0;
            s.pop();
            continue;
        }

        if (sum != M && top.i <= n) {
            x[top.i] = top.j;
            top.old_S = sum;
            if (top.j == 1) sum += m[top.i];
            if (top.j == -1) sum -= m[top.i];
            s.push(state(top.i + 1, -1));
        }
        ++top.j;
    }
    return 0;
}