 include <stdio.h>

int main() {
    long int m, n, a;
    scanf("%ld %ld %ld", &m, &n, &a);

    long int tam = (m + a - 1) / a;
    long int tan = (n + a - 1) / a;

    printf("%ld\n", tam * tan);

    return 0;
}
