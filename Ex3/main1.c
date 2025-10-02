#include <stdio.h>

int main() {
    int n = 6;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= n - i) {
                printf(" ");
            } else {
                printf("%d", i);
                if (j < n) printf(" "); // 數字之間加空格
            }
        }
        printf("\n");
    }
    return 0;
}
