/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include<bits/stdc++.h>

using namespace std;

const int MAX = 100;

int n, k;
int m;
vector<vector<int> > vt; 
int x[MAX];
bool visited[MAX];
int cnt;

void inputData(){
    cin >> n >> k;
    cin >> m;
    vt.resize(n+1);
    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        vt[u-1].push_back(v-1); // Đỉnh v kề với đỉnh u
        vt[v-1].push_back(u-1); // Đỉnh u kề với đỉnh v
    }

    for (int i = 0; i < n; i++){
        visited[i] = false;
    }
    cnt = 0;
}

bool check(int a, int i){
    if (a == 0) return true;
    if (visited[i]) return false;

    int index = 0;
    for (int j = 0; j < vt[x[a-1]].size(); j++){
        if (i == vt[x[a-1]][j]) index++;
    }

    if (index == 0) return false;
    return true;
}

void solution(){
    cnt++;
}

void TRY(int a){
    for (int i = 0; i < n; i++){
        if (check(a, i)){
            visited[i] = true;
            x[a] = i;

            if(a == k) solution();
            else TRY(a+1);

            visited[i] = false;
        }
    }
}

int main(int argc, const char** argv) {
    inputData();
    TRY(0);
    cout << cnt/2;
}