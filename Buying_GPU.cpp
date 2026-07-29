#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        if (Z <= Y) {
            cout << -1 << endl;
            continue;
        }

        int price = X;
        int coins = 0;
        int month = 0;

        while (coins < price) {
            month++;
            price += Y;
            coins += Z;
        }

        cout << month << endl;
    }

    return 0;
}