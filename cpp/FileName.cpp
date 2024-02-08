#include<iostream>
#include<vector>
using namespace std;
#include <stdlib.h>

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, z, u, w;
    cin >> x >> y >> z >> u >>w;
    vector<vector<vector<vector<vector<ll>>>>> sum(x);
    int elem;
    for (int i = 0; i < x; i++) {
        sum[i] = vector<vector<vector<vector<ll>>>>(y);
        for (int j = 0; j < y; j++) {
            sum[i][j] = vector<vector<vector<ll>>>(z);
            for (int k = 0; k < z; k++) {
                sum[i][j][k] = vector<vector<ll>>(u);
                for (int l = 0; l < u; l ++) {
                    sum[i][j][k][l] = vector<ll>(w + 1, 0);
                    for (int m = 0; m < w; m++) {
                        cin >> elem;
                        sum[i][j][k][l][m + 1] = elem + sum[i][j][k][l][m];
                    }
                }
            }
        }
    }
   
    int q;
    cin >> q;
    int r1, r2, r3, r4, r5, l1, l2, l3, l4, l5;
    while (q > 0) {
        q--;

        cin >> l1 >> l2 >> l3 >> l4 >> l5 >> r1 >> r2 >> r3 >> r4 >> r5;
        cout << sum[r1][r2][r3][r4][r5] - sum[l1-1][l2-1][l3-1][l4-1][l5-1]
            - sum[l1-1][r2][r3][r4][r5] - sum[r1][l2-1][r3][r4][r5]
            - sum[r1][r2][l3-1][r4][r5] - sum[r1][r2][r3][l4-1][r5]
            - sum[r1][r2][r3][r4][l5-1] + sum[l1-1][l2-1][r3][r4][r5]
            + sum[r1][l2-1][l3-1][r4][r5] + sum[r1][r2][l3-1][l4-1][r5]
            + sum[r1][r2][r3][l4-1][l5] - sum[l1-1][l2-1][l3-1][r4][r5]
            - sum[r1][l2-1][l3-1][l4-1][r5] - sum[r1][r2][l3-1][l4-1][l5-1]
            + sum[l1-1][l2-1][l3-1][l4-1][r5] + sum[r1][l2-1][l3-1][l4-1][l5-1] << '\n';
    }
    return 0;
}