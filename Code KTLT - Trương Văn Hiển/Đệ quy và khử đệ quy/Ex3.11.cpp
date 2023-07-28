/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include<bits/stdc++.h>

using namespace std;

const int MAX = 10000;

int n, r;
int price[MAX][MAX];
int x[MAX];
bool visited[MAX];
vector<int> vt;
int best, sum_price, start, des, numOfPoint;

void inputData(){
    cin >> n >> r;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> price[i][j];
        }
    }
}

bool check(int a, int i){
    if(visited[vt[i]]) return false; 
    if(price[x[a-1]][vt[i]] == 0) return false;
    return true;
}

void solution(){
    if (price[x[numOfPoint-2]][des] == 0) return;
    best = min(best, sum_price + price[x[numOfPoint-2]][des]);
}

void TRY(int k){
    for (int i = 1; i < numOfPoint - 1; i++){
        if (check(k, i)){
            visited[vt[i]] = true;
            sum_price += price[x[k-1]][vt[i]];
            x[k] = vt[i];

            if (k == numOfPoint - 2) solution();
            else TRY(k+1);

            visited[vt[i]] = false;
            sum_price -= price[x[k-1]][vt[i]];
        }
    }
}

int main(){
    string str;
    inputData(); 
    getline(cin,str);

    while(r > 0){
        best = INT_MAX;
        sum_price = 0;
        getline(cin, str);
        while (!str.empty()){
            stringstream convert(str.substr(0, str.find(" ")));
            int tmp = 0;
            convert >> tmp;
            vt.push_back(tmp - 1);

            if (str.find(" ") > str.size()) break;
            else str.erase(0, str.find(" ") + 1);
        }

        start = vt[0];
        des = vt[vt.size() - 1];
        numOfPoint = vt.size(); 
        x[0] = start; x[numOfPoint-1] = des;
        for(int i = 0; i < n; i++){
            visited[i] = false;
        }
        TRY(1);

        if (best == INT_MAX) cout << "0" << endl;
        else cout << best << endl;

        vt.erase(vt.begin(), vt.end());
        r--;
    }
}