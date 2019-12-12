#include <stdio.h>

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
int cbinSearch(char arr[], char x, int l, int r) {
    int mid = (l + r)/2;
    if (l > r) {
        return -1;
    }
    if (x == arr[mid]){
        return mid;
    }
    if (x < arr[mid]) {
        return cbinSearch(arr, x, l, mid - 1);
    } else {
        return cbinSearch(arr, x, mid + 1, r);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
        int l, m, n;
        scanf("%d %d %d", &l, &m, &n);
        // printf("%d %d %d", l, m, n);
        int b[m], c[n];
        char a[l];
        scanf("%*c");
        for (int i = 0; i < l; i++) {
            scanf("%c%*c", &a[i]);
        }
        // for (int i = 0; i < l; i++) {
        //     printf("%c ", a[i]);
        // }
        // printf("\n");
        for (int i = 0; i < m; i++) {
            scanf("%d", &b[i]);
        }
        // for (int i = 0; i < l; i++) {
        //     printf("%d ", b[i]);
        // }
        // printf("\n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &c[i]);
        }
        // for (int i = 0; i < l; i++) {
        //     printf("%d ", c[i]);
        // }
        // printf("\n");
        int q, r;
        char p;
        scanf("%*c");
        scanf("%c %d %d", &p, &q, &r);
        // printf("%d %d %d\n", p, q, r);
        int ap = cbinSearch(a, p, 0, l-1);
        int aq = binSearch(b, q, 0, m-1);
        int ar = binSearch(c, r, 0, n-1);
        if ((ap == -1) || (aq == -1) || (ar ==-1)) {
            printf("DOST HI SAANP HAI\n");
            // printf("%d %d %d\n", ap, aq, ar);
        } else {
            printf("SNAKE FOUND\n");
        }
    }
    return 0;
}