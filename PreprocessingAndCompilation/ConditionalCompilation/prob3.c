#include <stdio.h>
#if defined(_WIN32) || defined(_WIN64)
void s(int a[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}
#elif defined(__linux__)
void s(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int mi = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[mi])
                mi = j;
        int t = a[i];
        a[i] = a[mi];
        a[mi] = t;
    }
}
#elif defined(__APPLE__) || defined(__MACH__)
void s(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int k = a[i];
        int j = i - 1;
        while (j && a[j] > k) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = k;
    }
}
#else
void s(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int t = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = t;
    }
}
#endif
int main() {
    int a[100], n;
    s(a, n);
    return 0;
}