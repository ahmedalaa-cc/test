#include<iostream>
#include<vector>
using namespace std;//ahmed alaa
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        int x, y;
        for (int i = 0; i < n; i++) {
            cin >> x >> y;
            if (y == 1) {
                cnt++;//cnt++
            }
        }
        cout << cnt * 2 << endl;
    }

} 
