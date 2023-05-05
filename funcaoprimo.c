#include <stdio.h>
// verifica primo
int eh_primo(int n) {
    if (n < 2) {
        return -1;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

//
int main() {
    int a;
    while (scanf("%d", &a) == 1){;
    printf("%d\n", eh_primo(a));
    }
return 0;
}