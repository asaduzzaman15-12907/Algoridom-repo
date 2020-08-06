#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r) {
    int x = a[r], i = l - 1;

    for (int j = l; j < r; j++) {
        if (a[j] <= x) swap(a[++i], a[j]);
    }
    swap(a[++i], a[r]);

    return i;
}

void QuickSort(int a[], int l, int r) {
    if (l >= r) return;
    int p = partition(a, l, r);
    QuickSort(a, l, p - 1);
    QuickSort(a, p + 1, r);
}

int main() {
    int n, a[10000];

    cout << "Enter Array Size:";
    cin >> n;

    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    QuickSort(a, 0, n - 1);

    cout << "QuickSorted in Ascending order:";
    for (int i = 0; i < n; i++) cout << " " << a[i];
    cout << endl;

    return 0;
}
