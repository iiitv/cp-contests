#include <bits/stdc++.h>

#define MAXN 100001

using namespace std;

char yo[MAXN], lo[MAXN];

int main() {
    scanf(" %s %s", yo, lo);
    
    int dryo = 0;
    int n = strlen(yo);
    for(int i = 0; i < n; i++) {
        dryo += yo[i]-'0';
    }
    // digital root of yo
    dryo %= 9;
    n = strlen(lo);

    if (dryo == 0) {
        printf("9\n");
    }
    else if (dryo%3 == 0) {
        if (n == 1 && lo[0] == '1') printf("%d\n", dryo);
        else printf("9\n");
    }
    else {
        int p = 1, e = 0;
        for(int i = int(n) - 1; i >= 0; i--) {
            e = (e + (lo[i]-'0')*p)%6;
            p = (10*p)%6;
        }
        int yolo = 1;
        for(int i = 0; i < e; i++) {
            yolo = (yolo*dryo)%9;
        }
        if (yolo == 0) yolo = 9;
        printf("%d\n", yolo);
    }
    return 0;
}
