/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include<bits/stdc++.h>

using namespace std;

int n;
string str;
int cnt = 0, res = 0;
map<int, int> m;

void inputData(){
    cin >> str;
    n = str.length();
}

int calc(int b){
    int foo = 0;
    for (int i = 1; i < b; i++){
        foo += i;
    }
    return foo;
}

void solve(){
    int slg0 = 0, slg1 = 0;
    map<int, int>::iterator it;

    for (int i=0; i<n; i++){
        if (str[i] == '0') slg0++;
        else slg1++;

        int tmp = slg1 - slg0; // do chenh lenh 0,1
        it = m.find(tmp);
        if (it != m.end()){ // neu do chenh lech da ton tai
            it->second += 1;
        }else{
            m.insert({tmp, 1});
        }
    }

    it = m.begin();
    while (it != m.end()){
        res += calc(it->second);
        if (it->first == 0) res += it->second;
        it++;
    }
}

int main(){
    inputData();
    solve();
    cout << res;
    return 0;
}