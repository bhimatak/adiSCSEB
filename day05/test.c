#include <stdio.h> 
#include <stdlib.h> 
int f(const void *a, const void *b) {
    return *((int*)a) > *((int*)b);
} 
int g(int a[], int n) {
    qsort(a, n, sizeof(int), f);
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        
scanf("%d", &a[i]);
    g(a, n);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    for (int i = 0; i < n; i += 2)
        if (a[i] != a[i+1]) {
            printf("%d\n", a[i]);
            break;
        }
}
