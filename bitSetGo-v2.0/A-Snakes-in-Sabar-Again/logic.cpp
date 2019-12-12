#include <bits/stdc++.h>

using namespace std;

int binSearch(int arr[], int x, int l, int r) {
    int mid = (l + r)/2;
    if (l > r) {
        return -1;
    }
    if (x == arr[mid]){
        return mid;
    }
    if (x < arr[mid]) {
        return binSearch(arr, x, l, mid - 1);
    } else {
        return binSearch(arr, x, mid + 1, r);
    }
}
int binSearch(char arr[], char x, int l, int r) {
    int mid = (l + r)/2;
    if (l > r) {
        return -1;
    }
    if (x == arr[mid]){
        return mid;
    }
    if (x < arr[mid]) {
        return binSearch(arr, x, l, mid - 1);
    } else {
        return binSearch(arr, x, mid + 1, r);
    }
}

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int l, m, n;
        cin >> l >> m >> n;
        int b[m], c[n];
        char a[l];
        for (int i = 0; i < l; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        int q, r;
        char p;
        cin >> p >> q >> r;
        int ap = binSearch(a, p, 0, l-1);
        int aq = binSearch(b, q, 0, m-1);
        int ar = binSearch(c, r, 0, n-1);
        if (ap == -1 or aq == -1 or ar ==-1) {
            cout << "DOST HI SAANP HAI\n";
        } else {
            cout << "SNAKE FOUND\n";
        }
    }
    return 0;
}