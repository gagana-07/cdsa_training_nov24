//GCD of Maximum Sum Pair


#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        int arr[N];
         for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }
        
    }