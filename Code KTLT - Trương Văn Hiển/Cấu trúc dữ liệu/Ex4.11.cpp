/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include<bits/stdc++.h>

using namespace std;

struct data {
    int ai;
    int ki;

    data(int ai, int ki){
        this->ai = ai;
        this->ki = ki;
    }
};

struct comp{
    bool operator() (data a, data b){
        int ra, rb;

        if (a.ai <= a.ki) ra = a.ai;
        else ra = a.ki;

        if (b.ai <= b.ki) rb = b.ai;
        else rb = b.ki;

        return ra < rb;
    }
};

int n, s, kill_enemy, total_enemy;
priority_queue<data, vector<data>, comp> Q;

void inputData(){
    cin >> n >> s;
    kill_enemy = 0;
    total_enemy = 0;
    for (int i=0; i<n; i++){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        total_enemy += tmp1;
        Q.push(data(tmp1, tmp2));
    }
}

void solve(){
    while (!Q.empty() && s>0){
        data inf = Q.top(); 
        Q.pop();

        if (inf.ai <= inf.ki) kill_enemy += inf.ai;
        else {
            int nenemy = inf.ai - inf.ki;
            Q.push(data(nenemy, inf.ki));
            kill_enemy += inf.ki;
        }

        s -= 1;
    }
}

int calc_enemy(){
    return total_enemy - kill_enemy;
}

int main(){
    inputData();
    solve();
    cout << calc_enemy();
    return 0;
}