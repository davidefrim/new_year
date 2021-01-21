#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, k, i, min = 0;
    cin >> n >> k;
    for (i = 1; i <= n; i++) {
        min += i * 5;
        if (min > 240 - k) {
            cout << i - 1 << endl;
            return 0;
        }
    }
    cout << i - 1 << endl;
    return 0;
}