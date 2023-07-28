/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0, sum = 0;
    while (n--){
        int k, t;
        cin >> k >> t;
        if (t == 1){
            while (k--){
                int a;
                cin >> a;
                sum += a;
                ans = max(ans, -sum);
            }
        } else if (t == -1) {
            while (k--){
                int a;
                cin >> a;
                sum -= a;
                ans = max(ans, -sum);
            }
        }
    }
    cout << ans;
}