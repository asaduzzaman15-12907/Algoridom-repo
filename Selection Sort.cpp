#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[100000], min_idx;

    cout << "Enter Array Size:";
    cin >> n;

    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) min_idx = j;
        }
        swap(a[i], a[min_idx]);
    }

    cout << "SelectionSorted in Ascending order:";
    for (int i = 0; i < n; i++) cout << " " << a[i];
    cout << endl;

    return 0;
}
