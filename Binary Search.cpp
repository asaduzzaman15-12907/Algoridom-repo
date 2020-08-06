#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[100000], k, lo = 0, hi, mid, index;
    cout << "Enter Array Size:";
    cin >> n;
    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter Search Key: ";
    cin >> k;
    hi = n - 1;
    bool found = false;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (a[mid] == k) {
            found = true;
            index = mid;
            break;
        } else if (a[mid] > k)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    if (!found)
        cout << "Not Found" << endl;
    else
        cout << k << " found at index: " << index << endl;

    return 0;
}
