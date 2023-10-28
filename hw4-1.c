#include <stdio.h>
#include <stdbool.h>

main() {
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0  num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0  num % (i + 2) == 0) {
            return false;
        }
        else {
             return true;
        }
    }


}


    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (isPrime(num)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
