#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, lcm, limit, i;
    cin >> a >> b;
    limit = a * b;
    if (a > b)
        i = a;
    else
        i = b;
    for (; i <= limit; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }
    cout << lcm << endl;

    return 0;
}
